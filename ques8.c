// program to award grades
#include <stdio.h>
int main(void)
{
    int result;
    printf("Enter total marks of a student \n");
    scanf("%d", &result);
    if (result <= 50)
    {
        printf("Grade D \n");
    }
    else if (result <= 60)
    {
        printf("Grade C \n");
    }
    else if (result <= 75)
    {
        printf("Grade B \n");
    }
    else
    {
        printf("Grade A \n");
    }
    

    
}