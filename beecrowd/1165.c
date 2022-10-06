#include <stdio.h>
#include <math.h>

int main()
{
    int num, i, cont;

    scanf("%d", &cont);

    for(i = 0; i < cont; i++)
    {
        scanf("%d", &num);
        
        double num2 = sqrt(num);
        int num1 = sqrt(num);

        if(num1 - num2 == 0)
            printf("%d nao eh primo\n", num);
        else
            printf("%d eh primo\n", num);
    }
    return 0;
}