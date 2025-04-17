#include<stdio.h>

int main()
{
    printf("Enter hasan's ICT marks: ");
    int marks;
    scanf("%d",&marks);
    
    if(marks<=100 && marks>=80)
    {
        printf("Hasan's Grade is A+");
    }
    else if(marks<=79 && marks>=70)
    {
        printf("Hasan's Grade is A");
    }
    else if(marks<=69 && marks>=60)
    {
        printf("Hasan's Grade is A-");
    }
    else if(marks<=59 && marks>=50)
    {
        printf("Hasan's Grade is B");
    }
    else if(marks<=49 && marks>=40)
    {
        printf("Hasan's Grade is C");
    }
    else if(marks<=39 && marks>=33)
    {
        printf("Hasan's Grade is D");
    }
    else if(marks<=32 && marks>=0)
    {
        printf("Hasan's Grade is F");
    }
    else if(marks>100 || marks<0)
    {
        printf("The number is invalid");
    }
    return 0;
}