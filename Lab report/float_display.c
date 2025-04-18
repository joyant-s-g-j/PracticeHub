#include<stdio.h>

int main()
{
    float a,b;
    printf("Enter the 1st number: ");
    scanf("%f",&a);
    printf("Enter the 2nd number: ");
    scanf("%f",&b);
    float sum = a+b;
    printf("%.2f + %.2f = %.2f", a, b, sum);
    return 0;
}