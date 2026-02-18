#include <stdio.h>

int main() {
    int batteryPercent, n, i, drain, totalDrain = 0, remaining;

    scanf("%d", &batteryPercent);

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &drain);
        totalDrain += drain;
    }

    remaining = batteryPercent - totalDrain;

    if(remaining < 0)
        remaining = 0;
    printf("Remaining Battery: %d%%", remaining);

    return 0;
}