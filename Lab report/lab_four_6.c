#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits = 0, newNum;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    int sign = 1;
    if (num < 0)
    {
        sign = -1;
        num = -num;
    }

    lastDigit = num % 10;

    int temp = num;
    while (temp >= 10)
    {
        temp /= 10;
        digits++;
    }
    firstDigit = temp;

    int middlePart = num % (int)pow(10, digits);
    middlePart /= 10;

    newNum = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    newNum *= sign;

    printf("Number after swapping first and last digits: %d\n", newNum);

    return 0;
}
