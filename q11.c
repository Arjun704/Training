#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r;
    printf("\nEnter amount: ");
    scanf("%f",&p);
    printf("\nEnter time in year: ");
    scanf("%f",&t);
    printf("\nEnter rate of intrest: ");
    scanf("%f",&r);

    float ci = p*(1+(r/100)*1+(r/100));



    printf("interst amount => %.2f",ci);
    return 0;

}