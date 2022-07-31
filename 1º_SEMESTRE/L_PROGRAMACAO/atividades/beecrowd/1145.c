#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x, y, l , c = 0;

    scanf("%d %d", &x, &y);

    for(l = 1; l < y + 1; l++)
    {
    	c++;
        printf("%d", l);
        
        if(c == x)
        {
        	printf("\n");
        	c = 0;
        }
    }
    
    
    return 0;
}
