#include<stdio.h>

int main()
{
    int n, term = 1, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        sum += term;
        printf("%d", term);

        if(i < n)
        {
            printf(" + ");
        }

        term = term * 10 + 1;
    }

    printf("\nSum of the series: %d\n", sum);
    return 0;
}