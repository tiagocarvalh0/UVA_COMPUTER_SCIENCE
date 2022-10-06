#include <stdio.h>

int notacaoPositiva(double *num)
{
    int cont = 0;
    while(1)
    {
        if((*num > 0) && (*num < 10))
            return cont;
        else 
        {
            *num = *num / 10;
            cont++;
        }
    }
}

int notacaoNegativa(double *num)
{
    int cont = 0;
    while(1)
    {
        if(*num < -10)
        {
        	*num = *num / 10;
            return cont - 1;
        }
        else 
        { 
           *num = *num * 10;
           cont++;
        }
    }
}

int main()
{
    double num;
    int div;

    scanf("%lf", &num);
    
	if((num > 0) && (num < 1))
    {
        int cont = 0;
        while(1)
        {
            if(num > 10)
            {
                num = num / 10;
                cont -= 1;
                break;
            }
            else 
            { 
                num = num * 10;
                cont++;
            }
        }
        printf("+%.4lfE+%02d\n", num, cont);
	}

    else if((num > 0) && (num < 10))
        printf("+%.4lfE+00\n", num);

    else if((num < -10) && (num < 0))
       printf("%.4lfE-00\n", num);

    else if(num > 10)
    {
        div = notacaoPositiva(&num);
        printf("+%.4lfE+%02d\n", num, div);
    }

    else
    {
        div = notacaoNegativa(&num);
        printf("%.4lfE-%02d\n", num, div);
    }

    return 0;
}
