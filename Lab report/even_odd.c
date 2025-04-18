#include<stdio.h>

int main()
{
    int n;
    printf("Enter a value: ");
    scanf("%d", &n);

    if(n%2 == 0)
    {
        printf("%d is an even number", n);
    }
    else
    {
        printf("%d is a odd number", n);
    }

    return 0;
}