#include <stdio.h>
#include <math.h>

void findRoots(double a, double b, double c)
{
    double discriminant, root1, root2;

    if (a == 0 && b == 0)
    {
        printf("No solution exists.\n");
    }
    else if (a == 0)
    {
        root1 = -c / b;
        printf("There is only one root: %.2lf\n", root1);
    }
    else
    {
        discriminant = (b * b) - (4 * a * c);

        if (discriminant < 0)
        {
            printf("There are no real roots.\n");
        }
        else
        {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("The roots are: %.2lf and %.2lf\n", root1, root2);
        }
    }
}

int main() {
    double a, b, c;

    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the value of c: ");
    scanf("%lf", &c);

    findRoots(a, b, c);

    return 0;
}
