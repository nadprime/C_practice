// Program to print the pattern 
#include <stdio.h>
int main(void)
{
    int i, j;
    for ( i = 1; i <= 4; ++i)
    {
        printf("%d\n", i);
        for (j = 0; j <= i; ++j)
        {
            printf("%d\t", j);
        }
        
    }
    
}
