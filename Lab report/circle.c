#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f",&radius);
    printf("Area: %.2f\n",PI*pow(radius,2));
    printf("Circumference: %.2f\n", 2*PI*radius);
    return 0;
}


