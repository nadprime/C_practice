//Program to divide a sum of two numbers by thier difference
#include <stdio.h>

int main(void)
{
    int a, b;
    float c;
    a = 10;
    // b = 10; // divide by zero error
    b = 9;

    c = (a + b)/(a - b);

    printf("The value of the result is: %f \n", c);
}