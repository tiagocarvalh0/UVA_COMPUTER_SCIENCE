#define TRUE 1
#define FALSE 0

    const typedef enum {TAM_BIN = 3, TAM_OCTA = 9, TAM_DECI = 11, TAM_HEXA = 16, TAM_COMANDOS = 6, QNT_COMANDOS = 7}T_TAM_TABELA_CARACTERES;

    const char tabelaCaracteresBinario[TAM_BIN] = {"01"};
    const char tabelaCaracteresOctal[TAM_OCTA]= {"01234567"};
    const char tabelaCaracteresDecinal[TAM_DECI] = {"0123456789"};
    const char tabelaCaracteresHexadecimal [TAM_HEXA] = {"0123456789abcef"};

    const char comandosValidos [TAM_COMANDOS][QNT_COMANDOS] = {"--b", "--o", "--d", "--h", "--all", "--help"};

    const typedef enum {NUMERO_INFORMADO = 1, BASE_NUMERO_INFORMADO, BASE_CONVER_01, BASE_CONVER_02, BASE_CONVER_03, BASE_CONVER_04} T_PARAMETRO;

    //const typedef enum {ERRO_};