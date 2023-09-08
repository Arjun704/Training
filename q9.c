#include <stdio.h>

int main() {
    int amount, remainder;

    printf("Input the amount: ");
    scanf("%d", &amount);

    printf("There are:\n");

    int num100 = amount / 100;
    remainder = amount % 100;
    printf("%d Note(s) of 100.00\n", num100);

    int num50 = remainder / 50;
    remainder = remainder % 50;
    printf("%d Note(s) of 50.00\n", num50);

    int num20 = remainder / 20;
    remainder = remainder % 20;
    printf("%d Note(s) of 20.00\n", num20);

    int num10 = remainder / 10;
    remainder = remainder % 10;
    printf("%d Note(s) of 10.00\n", num10);

    int num5 = remainder / 5;
    remainder = remainder % 5;
    printf("%d Note(s) of 5.00\n", num5);

    int num2 = remainder / 2;
    remainder = remainder % 2;
    printf("%d Note(s) of 2.00\n", num2);

    printf("%d Note(s) of 1.00\n", remainder);

    return 0;
}
