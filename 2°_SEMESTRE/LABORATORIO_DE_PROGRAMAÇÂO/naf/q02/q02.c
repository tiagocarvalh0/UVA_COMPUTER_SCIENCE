#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerArqNotasAlunosTXT();
void lerArqNotasAlunosBIN();
void carregarAluno();

    typedef struct {
        int matricula;
        float nota01;
        float nota02;
        float nota03;
    } T_ALUNO;

    FILE *arqNotasAlunoTXT;
    FILE *arqNotasAlunoBIN;

int main() {

    T_ALUNO Aluno[50];
    T_ALUNO AlunoAUX;
    T_ALUNO alu;

    int index;
    
    lerArqNotasAlunosTXT(Aluno);
    lerArqNotasAlunosBIN(AlunoAUX);
    printf("Index = ");
    scanf("%d", &index);
    carregarAluno(index, &alu);

    return 0;
}
// Inicialize um vetor com 50 posições do tipo Aluno com matrícula e notas do alunos que estão noarquivo notas50alunos txt.
void lerArqNotasAlunosTXT(T_ALUNO Aluno[]) {
    arqNotasAlunoTXT = fopen("notas50alunos.txt", "r");

    if(arqNotasAlunoTXT == NULL)
        printf("!!! ERRO ARQ !!!\n");
    else {
        for(int i = 0; i < 50; i++)
            fscanf(arqNotasAlunoTXT, "%d %f %f %f", &Aluno[i].matricula, &Aluno[i].nota01, &Aluno[i].nota02, &Aluno[i].nota03);
        fclose(arqNotasAlunoTXT);
    }
    
    
    // Em seguida crie um arquivo binário chamado notas50alunos.bin com as informações destes alunos.
    arqNotasAlunoBIN = fopen("notas50alunos.bin", "wb");

    if(arqNotasAlunoBIN == NULL)
        printf("!!! ERRO ARQ !!!\n");
    else {
        fwrite(Aluno, sizeof(T_ALUNO), 50, arqNotasAlunoBIN);
        fclose(arqNotasAlunoBIN);
    }
}

// Abra o arquivo binário notas50alunos.bin e mostre no terminal as informações dos alunos.
void lerArqNotasAlunosBIN(T_ALUNO AlunoAUX) {
    arqNotasAlunoBIN = fopen("notas50alunos.bin", "rb");

    if(arqNotasAlunoBIN == NULL)
        printf("!!! ERRO ARQ !!!\n");
    else {
        while(!feof(arqNotasAlunoBIN)) {
            fread(&AlunoAUX, sizeof(T_ALUNO), 1, arqNotasAlunoBIN);
            printf("%d %.01f %.01f %.01f\n", AlunoAUX.matricula, AlunoAUX.nota01, AlunoAUX.nota02, AlunoAUX.nota03);
        }
        fclose(arqNotasAlunoBIN);
    }
}

// Crie uma função void carregarAluno(int index, Aluno *alu), o parâmetro index se refere a posição do aluno no arquivo (por exemplo o index = 1 é o primeiro aluno, enquanto o index = 7 é o sétimo aluno), *alu é uma estrutura aluno passada por referência. A função deve abrir o arquivo notas50alunos.bin encontrar o aluno da posição indicada por index e atribuir suas informações corretamente aos membros da estrutura alu. Demostre o uso da função buscando um aluno no arquivo e mostrando suas informações.
void carregarAluno(int index, T_ALUNO *alu) {
    arqNotasAlunoBIN = fopen("notas50alunos.bin", "rb");

    if(arqNotasAlunoBIN == NULL)
        printf("!!! ERRO ARQ !!!\n");
    else {
        fseek(arqNotasAlunoBIN, sizeof(T_ALUNO) * --index, SEEK_SET);
        fread(alu, sizeof(T_ALUNO), 1, arqNotasAlunoBIN);
        printf("METRICULA: %d\n", alu->matricula);
        printf("NOTA 01: %.01f\n", alu->nota01);
        printf("NOTA 02: %.01f\n", alu->nota02);
        printf("NOTA 03: %.01f\n", alu->nota03);
        fclose(arqNotasAlunoBIN);
    }
}