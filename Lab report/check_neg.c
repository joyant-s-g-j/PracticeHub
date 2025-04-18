#include<stdio.h>

int main()
{
    int n;
    printf("Enter a value: ");
    scanf("%d", &n);
    if(n>0)
    {
        printf("%d is a positive number", n);
    }
    else if(n<0)
    {
        printf("%d is a negative number", n);
    }
    else
    {
        printf("this is zero");
    }
    return 0;
}