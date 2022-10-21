#include <stdio.h>

int main()
{
    int num;

    while(1)
    {
        scanf("%d", &num);
        if(num == NULL)
            break;
        printf("%d\n", num - 1);
    }
    
    return 0;
}