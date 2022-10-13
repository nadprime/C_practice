// Program to calculate an Air Ticket fare after discount
#include <stdio.h>
int main(void)
{
    int age;
    float fare;
    printf("Enter the age of a passenger:");
    scanf("%d", &age);
    printf("Enter the air ticket fare:\n");
    scanf("%f", &fare);
    if (age < 14)
    {
        fare = fare - 0.5 * fare;
    }
    else if (age <= 50)
    {
        fare = fare - 0.1 * fare;
    }
    else
    {
        fare = fare - 0.2 * fare;
    }
    printf("Air TIckets fare to be charged after discount is : %.2f", fare);
}