#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a == b)
        printf("%d\n", a);
    else if(a > b)
        printf("%d\n", a);
    else if(a < b)    
        printf("%d\n", b);

    return 0;
}