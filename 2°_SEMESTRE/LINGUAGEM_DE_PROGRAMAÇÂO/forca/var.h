
#define TAM_VETOR 10
#define TAM_ALFABETO 55

    const typedef enum { LETRA_DUPLICADA = -2 , NO_ERROR = 0, HEAD = 1,  BODY, LEFT_ARM, RIGHT_ARM, LEFT_LEG, RIGHT_LEG, GAME_OVER = 6} T_ERRO;
    const typedef enum { ACERTO = -1} T_ACERTO;    
    const char vetorDePalavras[TAM_VETOR][TAM_VETOR] = {"exceto", "mister", "vereda", "casual", "idiota", "anseio", "gentil", "larica", "formal", "pressa"};
    
    char alfabeto[TAM_ALFABETO]={"a b c d e f g h i j k l m n o p q r s t u v w x y z"};  
    char palavraSorteada[TAM_VETOR];
    char palavraAUX[TAM_VETOR] = {"______"};
    char letraInformada;
    int contTentativas = 0;
    int erro = 0;