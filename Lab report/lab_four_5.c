#include<stdio.h>

int main()
{
    int num, first, last;
    printf("Enter the integer: ");
    scanf("%d", &num);

    if(num<0)
    {
        num = -num;
    }
    last = num % 10;
    first = num;
    while (first >= 10)
    {
        first /= 10;
    }
    printf("Sum of the first and last digit: %d\n", first+last);
    
    return 0;
}