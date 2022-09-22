#include <stdio.h>

int primo(int num)
{
    int i, cont = 0;

    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)    
            cont++;
    }

    if(cont == 2)
        return 1;
    else    
        return 0;

}

int main()
{
    int num;

    scanf("%d", &num);

    printf("(%d)\n", primo(num));



    return 0;
}