// . Write a C program to calculate the distance between the two points.


#include<math.h>
#include<stdio.h>
void main()
{
    int x1 =25,y1=15;
    int x2=35,y2=10;

    float dis =sqrt((x2-x1)*(x2-x1) + (y2-y2)*(y2-y1));
    printf("the distance between the two points => %.2f",dis);    
}