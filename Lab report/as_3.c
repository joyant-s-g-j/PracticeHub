#include<stdio.h>
void printBinary(int n)
{
    for(int i=7; i>=0;i--)
    {
        printf("%d", (n>>i) & 1);
    }
    printf("\n");
}
int main()
{
    char ch;
    printf("Enter a lowercase letter: ");
    scanf(" %c", &ch);

    char upper = ch - 32;
    printf("Uppercase: %c\n", upper);
    printf("Binary of %c: ", ch);
    printBinary(ch);
    return 0;
}