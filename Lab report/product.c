#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the 2nd number: ");
    scanf("%d",&b);
    int product = a*b;
    printf("Product of the above two numbers: %d", product);
    return 0;
}