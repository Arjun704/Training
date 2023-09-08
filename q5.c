#include <stdio.h>

int main() {
    double kilometersPerHour, milesPerHour;

    
    printf("Input kilometers per hour: ");
    scanf("%lf", &kilometersPerHour);

   
    milesPerHour = kilometersPerHour * 0.621371;

     
    printf("%.6lf miles per hour\n", milesPerHour);

    return 0;
}
