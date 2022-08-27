#include <stdio.h>
#include <math.h>

int raizQua(int a, int b, int c, float *raiz1, float *raiz2)
{
    int delta;

    delta = (b * b) -4 * a * c;

    *raiz1 = ((-b) + sqrt(delta)) / (2 * a);
    *raiz2 = ((-b) - sqrt(delta)) / (2 * a);

    if(delta > 0)
        return 1;
    if(delta == 0)
        return 0;
    else    
        return -1;

}

int main()
{
    int x, y, z;
    float raiz1, raiz2;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if(raizQua(x, y, z, &raiz1, &raiz2) > 0)
		printf("%.2f\n%.2f", raiz1, raiz2);
	if(raizQua(x, y, z, &raiz1, &raiz2) == 0)
		printf("%.2f\n", raiz1);
	if(raizQua(x, y, z, &raiz1, &raiz2) < 0)
		printf("N RAIZ!!!!\n");
	
		


    return 0;
}
