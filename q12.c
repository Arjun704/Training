//  C program to calculate total average and percentage of five subjects

//     Example Input

//     Enter marks of five subjects: 95 76 85 90 89

#include<stdio.h>
void main()
{
    int  h,e,m,s,he;
    printf("Enter English mask: ");
    scanf("%d",&e);
    printf("Enter Hindi mask: ");
    scanf("%d",&h);
    printf("Enter Math mask: ");
    scanf("%d",&m);
    printf("Enter Science mask: ");
    scanf("%d",&s);
    printf("Enter History mask: ");
    scanf("%d",&he);

    int total = (h + e + he + m + s );
    int average = (h + e + he + m + s )/5;
    float pers =(average/100)*100;
    printf("Total=> %d\nAverage => %d\nPersentage => %.2f",total,average,pers); 
}
