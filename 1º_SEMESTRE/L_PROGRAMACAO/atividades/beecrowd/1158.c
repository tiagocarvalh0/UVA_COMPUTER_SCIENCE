#include <stdio.h>

int sumaNum(int num)
{
    int num1, num2, i, soma = 0, cont = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    while(cont != num2)
    {
        if(num1 % 2 != 0)
        {
            soma+= num1;
            cont++;
            num1++;
        }
        else
            num1++;
    }

    return soma;
}

int main()
{
    int num;

    scanf("%d", &num);

    for(int i = 0; i < num; i++)
        printf("%d\n", sumaNum(num));

    return 0;
}