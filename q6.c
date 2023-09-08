#include <stdio.h>

int main() {
    int minutes, hours, remainingMin;

    printf("Input minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    remainingMin = minutes % 60;

    printf("%d Hours, %d Minutes\n", hours, remainingMin);

    return 0;
}
