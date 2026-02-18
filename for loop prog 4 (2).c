#include <stdio.h>

int main() {
    int salary, absentDays, finalSalary;

    // Read salary and absent days
    scanf("%d", &salary);
    scanf("%d", &absentDays);

    // Calculate final salary
    finalSalary = salary - (absentDays * 100);

    // Print final salary
    printf("Final Salary: ₹%d", finalSalary);

    return 0;
}