#include <stdio.h>
#include <math.h>

int main() {
    float radius, volume;
    float PI=3.14;

    printf("Input the radius of the sphere: ");
    scanf("%lf", &radius);

   
    volume = (4 / 3) * PI * (radius*radius*radius);

    
    printf("The volume of the sphere is %.3f\n", volume);

    return 0;
}
