#include <stdio.h>

int main() {
    double salary, tax, base_tax, excess_percentage, excess_salary;

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    if (salary >= 0 && salary <= 14999.99) {
        base_tax = 0.0;
        excess_percentage = 15.0;
        excess_salary = salary - 0;
    } 
    else if (salary >= 15000.00 && salary <= 29999.99) {
        base_tax = 2250.0;
        excess_percentage = 18.0;
        excess_salary = salary - 15000.00;
    } 
    else if (salary >= 30000.00 && salary <= 49999.99) {
        base_tax = 5400.0;
        excess_percentage = 22.0;
        excess_salary = salary - 30000.00;
    } 
    else if (salary >= 50000.00 && salary <= 79999.99) {
        base_tax = 11000.0;
        excess_percentage = 27.0;
        excess_salary = salary - 50000.00;
    } 
    else if (salary >= 80000.00 && salary <= 150000.00)
    {
        base_tax = 21600.0;
        excess_percentage = 33.0;
        excess_salary = salary - 80000.00;
    } 
    else
    {
        printf("Salary out of range.\n");
        return 1;
    }

    tax = base_tax + (excess_salary * excess_percentage / 100);
    printf("Total tax to be paid: $%.2f\n", tax);

    return 0;
}
