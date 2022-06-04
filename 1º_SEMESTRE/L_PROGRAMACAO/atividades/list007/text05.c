#include <stdio.h>

int main()
{
	void sub_Fun(void);
	
	sub_Fun();
	
	return 0;
}
void sub_Fun(void)
{
	int hora_Ini, min_Ini, hora_Fim, min_Fim, tempo_Ini, tempo_Fim, tempo_Jogo, tempo_hJogo, tempo_mJogo;
	printf("Hora do Inicio: ");
	scanf("%d %d", &hora_Ini, &min_Ini);
	printf("Hora do Fim: ");
	scanf("%d %d", &hora_Fim, &min_Fim);
	
	tempo_Ini = (hora_Ini * 60) + min_Ini;
	tempo_Fim = (hora_Fim * 60) + min_Fim;
	tempo_Jogo = tempo_Fim - tempo_Ini ;
	
	if(tempo_Jogo > 0)
	{
		tempo_hJogo = tempo_Jogo / 60;
		tempo_mJogo = tempo_Jogo - (tempo_hJogo * 60);
	}
	else if(tempo_Jogo < 0)
	{
		printf("%d\n", tempo_Jogo);
		tempo_Jogo = 1440 + tempo_Jogo;
		tempo_hJogo = tempo_Jogo / 60;
		tempo_mJogo = tempo_Jogo - (tempo_hJogo * 60);
	
	}
	else if(tempo_Jogo == 0)
	{
		tempo_hJogo = 24;
		tempo_mJogo = 0;
	}
	
	printf("Tempo de Duracao\n%d : %d\n", tempo_hJogo, tempo_mJogo);

}
