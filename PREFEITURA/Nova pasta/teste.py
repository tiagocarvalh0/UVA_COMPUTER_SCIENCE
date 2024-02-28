import os
from datetime import datetime, timedelta

def criar_pastas_do_mes(ano, mes):
    # Obter o primeiro dia do mês
    data_atual = datetime(ano, mes, 1)
    # Obter o último dia do mês
    ultimo_dia_mes = (datetime(ano, mes % 12 + 1, 1) - timedelta(days=1)).day

    # Loop através de cada dia do mês
    for dia in range(1, ultimo_dia_mes + 1):
        # Formatar a data no formato DD-MM-YYYY
        nome_pasta = data_atual.strftime("%d-%m-%Y")
        # Criar a pasta
        os.makedirs(nome_pasta, exist_ok=True)
        # Avançar para o próximo dia
        data_atual += timedelta(days=1)

# Definir o ano e mês desejados
ano = 2024
mes = 3  # Janeiro

# Chamar a função para criar as pastas
criar_pastas_do_mes(ano, mes)
