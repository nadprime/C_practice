// Program to find relationship between two numbers
#include <stdio.h>
int main(void)
{
    int a,b;
    printf("Please enter two integers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    if (a <= b)
    {
        printf("%d <= %d\n",a,b);
    }
    else
    {
        printf("%d > %d \n", a,b);
    }
    
    
}