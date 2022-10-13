// Program to print first 10 even natural numbers
#include <stdio.h>
int main(void)
{
    int i = 0;
    int j = 0;
    do
    {
        printf("%d", j);
        j = j + 2;
        i = i + 1;
    } while (i < 10);
}