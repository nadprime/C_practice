// Switch statement example
#include <stdio.h>
#include <math.h>
int main(void)
{
    int choice, n;
    printf("Enter any number:");
    scanf("%d", &n);
    printf("Choice is as follows: \n");
    printf("1. To find square of the number \n");
    printf("2. To find square-root of the number \n");
    printf("3 To find cube of the number \n");
    printf("4. To find square-root of the number \n");
    printf("Enter Your Choice \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("The square of the number is %d", n*n);
        break;

    case 2:
        printf("THe square-root of the given number is %d", sqrt(n));
        break;    
    case 3:
        printf("THe cube of the given number is %d", n*n*n);
        break;    
    case 4:
        printf("THe square-root of the given number is %d", sqrt(n));
        break;    
    
    default:
        printf("The number you have given is %d", n);
        break;
    }

}