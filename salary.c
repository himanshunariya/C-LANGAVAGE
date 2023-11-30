#include <stdio.h>

int main() {
    float basic_salary, hrd, da, gross_salary;

    printf("Enter the basic salary of an employee: ");
    scanf("%f", &basic_salary);

    if (basic_salary <= 5000) {
        hrd = basic_salary * 0.08;
        da = basic_salary * 0.2;
    } else if (basic_salary <= 10000) {
        hrd = basic_salary * 0.12;
        da = basic_salary * 0.3;
    } else if (basic_salary <= 15000) {
        hrd = basic_salary * 0.15;
        da = basic_salary * 0.4;
    } else {
        hrd = basic_salary * 0.2;
        da = basic_salary * 0.5;
    }

    gross_salary = basic_salary + hrd + da;

    printf("Gross Salary: %.2f", gross_salary);

    return 0;
}
