#include<stdio.h>

int main()
{
    int n,w;
    printf("Enter week number: ");
    scanf("%d", &n);
    
    if(n < 1 || n > 7)
    {
        printf("The week number is invalid");
    }
    else
    {
        switch(n)
        {
            case 1:
                printf("Monday");
                break;
            case 2:
                printf("Tuseday");
                break;
            case 3:
                printf("Wednesday");
                break;
            case 4:
                printf("Thrusday");
                break;
            case 5:
                printf("Friday");
                break;
            case 6:
                printf("Saturday");
                break;
            case 7:
                printf("Sunday");
                break;
        }
    }

    return 0;
}