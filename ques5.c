// Program to calculate the net salary of an employee

#include <stdio.h>
int main(void)
{
    float gross_salary, net_salary;
    
    printf("Enter gross salary of an employee \n");
    scanf("%f", &gross_salary);

    if (gross_salary < 10000)
    {
        net_salary = gross_salary;
    }
    if (gross_salary >= 10000)
    {
        net_salary = gross_salary - 0.15 * gross_salary;
    }
    printf("Net salary is  Rs. %.2f", net_salary);
    
}