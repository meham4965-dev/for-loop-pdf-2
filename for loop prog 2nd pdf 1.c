#include <stdio.h>

int main() {
    int n, expense;
    int total = 0;
    int overspendDays = 0;

    // Read number of days
    scanf("%d", &n);

    // Read daily expenses
    for(int i = 0; i < n; i++) {
        scanf("%d", &expense);
        total += expense;

        if(expense > 1000) {
            overspendDays++;
        }
    }

    // Print results
    printf("Total Expense: %d\n", total);
    printf("Overspend Days: %d\n", overspendDays);

    return 0;
}