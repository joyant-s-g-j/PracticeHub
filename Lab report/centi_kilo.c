#include<stdio.h>

int main()
{
    float c;
    printf("enter centimeter: ");
    scanf("%f",&c);
    printf("meter: %.3f\n", c/100);
    printf("kilometer:  %.3f",c/100000);
    return 0;
}