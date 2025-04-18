#include<stdio.h>

int main()
{
    long long num;
    int digit, frequency[10] = {0};

    printf("Enter the integer: ");
    scanf("%lld", &num);

    if (num < 0)
    {
        num = -num;
    }

    while(num != 0)
    {
        digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }
    printf("Frequency of each digit: \n");
    for(int i = 0; i<10; i++)
    {
        if(frequency[i] > 0)
        {
            printf("Digit %d: %d times\n", i, frequency[i]);
        }
    }
    return 0;
}