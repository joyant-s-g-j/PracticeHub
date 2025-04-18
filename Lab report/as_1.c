#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a letter: ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 'A' : case 'a' :
        printf("Ada\n");
        break;
        case 'B' : case 'b' :
        printf("Basic\n");
        break;
        case 'C' : case 'c' :
        printf("Cobol\n");
        break;
        case 'D' : case 'd' :
        printf("Database\n");
        break;
        case 'F' : case 'f' :
        printf("Fortran\n");
        break;
        case 'P' : case 'p' :
        printf("Pascal\n");
        break;
        case 'V' : case 'v' :
        printf("Visual C\n");
        break;
        default:
        printf("No matching language\n");
    }
    return 0;
}