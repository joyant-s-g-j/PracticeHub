#include<stdio.h>

int main()
{
    int num, digit, product = 1;
    printf("Enter the integer: ");
    scanf("%d", &num);

    if(num < 0)
    {
        num = -num;
    }

    while (num != 0)
    {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }

    printf("product of digits: %d\n", product);
    
    return 0;
}