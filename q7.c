#include <stdio.h>

int main() {
    double angle1, angle2, angle3;

    printf("Input two angles of the triangle separated by comma: ");
    scanf("%lf,%lf", &angle1, &angle2);

    angle3 =  180 - (angle1 + angle2);

    printf("Third angle of the triangle: %.2lf\n", angle3);

    return 0;
}
