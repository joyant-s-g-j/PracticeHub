#include<stdio.h>

int main()
{
    int side_1, side_2, side_3;
    printf("Enter 1st side value: ");
    scanf("%d", &side_1);
    printf("Enter 2nd side value: ");
    scanf("%d", &side_2);
    printf("Enter  3rd side value: ");
    scanf("%d", &side_3);

    if(side_1 + side_2 > side_3 && side_1 + side_3 > side_2 && side_2 + side_3 > side_1)
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is not valid.\n");
    }

    return 0;
}