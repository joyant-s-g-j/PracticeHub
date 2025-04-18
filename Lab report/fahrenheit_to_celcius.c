#include<stdio.h>

int main()
{
    float f, c;
    printf("Enter fahrenheit: ");
    scanf("%f",&f);
    c = (f -32) * 5/9;
    printf("Celcius: %.2f", c);
    return 0;
}