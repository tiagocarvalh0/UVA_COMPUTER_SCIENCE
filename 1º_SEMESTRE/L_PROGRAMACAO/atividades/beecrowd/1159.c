#include <stdio.h>

int main()
{
    int num = -1, cont = 0, soma = 0;

    while(1)
    {
        scanf("%d", &num);

        if(num == 0)
            break;

        while(1)
        {   
            if(cont == 5)
            {
                printf("%d\n", soma);
                soma = 0;
                cont = 0;
                break;
            }

            if(num % 2 == 0)
            {
                soma+= num;
                cont++;
                num++;
            }
            else    
                num++;
        }

    }

    return 0;
}