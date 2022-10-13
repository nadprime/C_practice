// Print to print first n natural numbers
#include <stdio.h>
int main(void)
{
    int i, n;
    printf("Enter value of n \n");
    scanf("%d", &n);
    printf("The first %d natural numbers are : \n", n);
    for (i = 1; i <= n; ++i)
    {
        printf("%d \t", i);
    }
}