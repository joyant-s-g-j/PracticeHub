#include<stdio.h>

int main()
{
    int ang_1, ang_2, ang_3, sum;
    printf("Enter 1st angles value: ");
    scanf("%d", &ang_1);
    printf("Enter 1nd angles value: ");
    scanf("%d", &ang_2);
    printf("Enter  3rd angles value: ");
    scanf("%d", &ang_3);

    sum = ang_1 + ang_2 + ang_3;

    if (sum == 180 && ang_1 > 0 && ang_2 > 0 && ang_3 > 0) 
    {
        printf("The triangle is valid.\n");
    } 
    else
    {
        printf("The triangle is not valid.\n");
    }
    return 0;
}