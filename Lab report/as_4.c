#include <stdio.h>

void listNumbersDesc(int start, int end)
{
    for(int i = start; i >= end; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main() 
{
    int start, end;
    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);

    listNumbersDesc(start, end);
    return 0;
}
