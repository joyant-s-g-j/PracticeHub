#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Input number: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("largest number : %d", a);
    }
    else if (b > a && b > c)
    {
        printf("largest number : %d", b);
    }
    else
    {
        printf("largest number : %d", c);
    }
    return 0;
}