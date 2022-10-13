// Program to print whether the given number is even or odd
#include <stdio.h>
int main(void)
{
    int x;
    printf("Enter a number: \n");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("Given number is even \n");
    }
    else
    {
        printf("Given number is odd \n");
    }
}