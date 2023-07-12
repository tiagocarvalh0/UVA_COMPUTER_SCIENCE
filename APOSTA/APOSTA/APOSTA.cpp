#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <Windows.h>
#include "xlsxwriter.h"

using namespace std;
/*
int main() {
    std::string csvFilename = "arquivo.csv";
    std::string excelFilename = "arquivo.xlsx";
    std::string password = "senha_de_protecao";  // Defina a senha de proteção desejada

    system("tasklist /fi \"imagename eq excel.exe\" | find /i \"excel.exe\" && taskkill /f /im excel.exe || echo Excel nao esta em execucao.");
    // Verificar se o arquivo Excel já existe e excluí-lo, se necessário

    // Abrir o arquivo CSV para leitura
    std::ifstream csvFile(csvFilename);
    if (!csvFile) {
        std::cerr << "Erro ao abrir o arquivo CSV: " << csvFilename << std::endl;
        return 1;
    }

    // Criar um novo arquivo Excel
    lxw_workbook* workbook = workbook_new(excelFilename.c_str());
    lxw_worksheet* worksheet = workbook_add_worksheet(workbook, NULL);

    std::string line;
    std::size_t rowNumber = 0;

    // Ler o arquivo CSV linha por linha
    while (std::getline(csvFile, line)) {
        std::vector<std::string> values;
        std::string value;
        std::istringstream iss(line);

        // Separar os valores por vírgula
        while (std::getline(iss, value, ',')) {
            values.push_back(value);
        }

        std::size_t colNumber = 0;

        // Escrever os valores na planilha do Excel
        for (const auto& val : values) {
            worksheet_write_string(worksheet, static_cast<lxw_row_t>(rowNumber),
                static_cast<lxw_col_t>(colNumber), val.c_str(), NULL);
            ++colNumber;
        }

        // Definir o efeito de linhas zebradas
        if (rowNumber % 2 == 0) {
            lxw_format* zebraFormat = workbook_add_format(workbook);
            format_set_bg_color(zebraFormat, 0xDDEBF7);  // Definir a cor de fundo para uma cor clara
            worksheet_set_row(worksheet, static_cast<lxw_row_t>(rowNumber), 15, zebraFormat);  // Definir a altura da linha e aplicar o formato
        }

        ++rowNumber;
    }

    csvFile.close();

    // Definir a proteção do arquivo Excel com senha
    //worksheet_protect(worksheet, password.c_str(), NULL);

    // Definir o autofiltro na planilha
    worksheet_autofilter(worksheet, 0, 0, static_cast<lxw_row_t>(rowNumber - 1), static_cast<lxw_col_t>(rowNumber));

    // Salvar e fechar o arquivo Excel
    int result = workbook_close(workbook);
    if (result != LXW_NO_ERROR) {
        std::cerr << "Erro ao salvar o arquivo Excel: " << result << std::endl;
        return 1;
    }

    // Converte o caminho do arquivo para sequência de caracteres largos
    const char* arquivo_estreito = "arquivo.xlsx";
    wchar_t arquivo_largo[MAX_PATH];
    MultiByteToWideChar(CP_ACP, 0, arquivo_estreito, -1, arquivo_largo, MAX_PATH);

    // Define o arquivo como somente leitura
    SetFileAttributesW(arquivo_largo, FILE_ATTRIBUTE_READONLY);

    std::cout << "Arquivo convertido com sucesso: " << excelFilename << std::endl;

    return 0;

}
*/


int main() {
    // Cria um novo arquivo Excel
    lxw_workbook* workbook = workbook_new("arquivo.xlsx");
    // Adiciona uma nova planilha
    lxw_worksheet* worksheet = workbook_add_worksheet(workbook, NULL);

    // Dados de exemplo para a coluna
    int data[] = { 1, 2, 3, 4, 5 };
    int num_rows = sizeof(data) / sizeof(data[0]);

    // Define as condições que serão aplicadas
    lxw_format* format_red = workbook_add_format(workbook);
    format_set_pattern(format_red, LXW_PATTERN_SOLID);
    format_set_bg_color(format_red, 0xFF0000);

    lxw_format* format_green = workbook_add_format(workbook);
    format_set_pattern(format_green, LXW_PATTERN_SOLID);
    format_set_bg_color(format_green, 0x00FF00);

    // Percorre as células da coluna e aplica as condições
    for (int row_num = 0; row_num < num_rows; ++row_num) {
        int value = data[row_num];

        // Aplica a condição na célula atual
        char cell_ref[LXW_MAX_CELL_NAME_LENGTH];
        lxw_row_t row = row_num + 1;
        lxw_col_t col = 0;
        lxw_rowcol_to_cell(row, col, cell_ref);

        if (value > 3) {
            worksheet_conditional_format_cell(worksheet, cell_ref,
                LXW_CONDITIONAL_FORMAT_CELL_IS, ">", "3", format_red);
        }
        else if (value <= 3) {
            worksheet_conditional_format_cell(worksheet, cell_ref,
                LXW_CONDITIONAL_FORMAT_CELL_IS, "<=", "3", format_green);
        }
    }

    // Fecha o arquivo Excel
    workbook_close(workbook);

    return 0;
}




