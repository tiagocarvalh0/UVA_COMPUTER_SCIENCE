#include <stdio.h>

int main(){

    	float n1, n2, n3, n4, x, media, media_f;

    	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    	media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1))/10;
    	printf("Media: %.1lf\n", media);

    	if(media > 7.0){
    	printf("Aluno aprovado.\n");
}
    	if(media < 5.0){
        printf("Aluno reprovado.\n");

}
    	if(media >= 5.0 && media <=6.9){
        printf("Aluno em exame.\n");
        scanf("%f", &x);
        media_f = (media + x )/2;
        printf("Nota do exame: %.1f\n", x);

        if(media_f >= 5.0){
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", media_f);
}
        if(media_f <= 4.9){
        printf("Aluno reprovado.\n");
        printf("Media final: %.1f", media_f);
}
}
}