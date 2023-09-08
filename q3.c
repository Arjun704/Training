#include <stdio.h>

int main() {
    char employeeID[11];
    double hoursWorked, hourlyRate, salary;

    
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%10s", employeeID);

    
    printf("Input the working hrs: ");
    scanf("%lf", &hoursWorked);

    
    printf("Salary amount/hr: ");
    scanf("%lf", &hourlyRate);

   
    salary = hoursWorked * hourlyRate;

    printf("Employees ID = %s\n", employeeID);
    printf("Salary = U$ %.2lf\n", salary);

    return 0;
}
