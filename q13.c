#include<stdio.h>
#include<math.h>
void main()
{
    int side;
    printf("Enter sides of triangle: ");
    scanf("%d",&side);
    float triangle = ((sqrt(3) / 4) * (side * side));
    printf("Area of equilateral triangle => %.3f",triangle);


}