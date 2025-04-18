#include<stdio.h>

int main()
{
    int num, reminder;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Digits in reverse order: ");
    while (num != 0)
    {
        reminder = num % 10;
        printf("%d", reminder);
        num /= 10;
    }
    return 0;
}