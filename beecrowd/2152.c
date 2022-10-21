#include <stdio.h>

int main()
{
    int num, h, m, o;

    scanf("%d", &num);

    for(int i = 0; i < num; i++)
    {
        scanf("%d %d %d", &h, &m, &o);

        printf("%02d:%02d - ", h, m);
        if(o == 1)
            printf("A porta abriu!\n");
        else    
            printf("A porta fechou!\n");
    }
    
    return 0;
}