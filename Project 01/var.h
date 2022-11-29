#include <stdio.h>
#define x 0

    FILE *apostaAtual;
    FILE *historicoAposta;
    FILE *numeroBilhete;
    
    const typedef enum {FAZER_APOSTA = 1, MOSTRAR_APOSTA, INFORMAR_GANHADOR, MOSTRAR_APOSTA_GANHADORA, EXCLUIR_APOSTA, MOSTRAR_APOSTA_ANTIGAS, SAIR} TIPO_OPCAO;
    
    const typedef enum{RJ = 1, CE} T_LOCAL;
    const char local[2][5] = {"RJ", "CE"};
    const char horarioLocalRJ[6][8] = {"11:00","14:20","16:00","16:20","18:20","21:20"};
    const char horarioLocalCE[3][8] = {"11:00", "14:00", "19:00"};
    const char animal[26][20] = {"AVESTRUZ","ÁGUIA","BURRO","BORBOLETA","CACHORRO","CABRA","CARNEIRO","CAMELO","COBRA","COELHO","CAVALO","ELEFANTE","GALO","GATO","JACARÉ","LEÃO","MACACO","PORCO","PAVÃO","PERU","TOURO","TIGRE","URSO","VEADO","VACA"};

    int opcaoSelecionada = 0;
    int numBilhete = 0;
    int dia_aposta;
	int mes_aposta;
	int ano_aposta;
	int hora_aposta;
	int min_aposta;

    typedef struct
    {
        int numBilhete1;
        int diaAposta1;
        int mesAposta1;
        int anoAposta1;
        int horaAposta1;
        int minAposta1;
        int localAposta;
        int animalAposta;
        float valorAposta;
        int horarioAposta;
        int ganhadorAposta;
        int valido;
    }t_cadastro;

    t_cadastro cadastro;
