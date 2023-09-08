// 15. Write a C program that accepts two item’s weight (floating points'
// values ) and number of purchase (floating points' values) and calculate the
// average value of the items.



//     Test Data :

//     Weight - Item1: 15

//     No. of item1: 5

//     Weight - Item2: 25

//     No. of item2: 4

//     Expected Output:

//     Average Value = 19.444444
#include<stdio.h>
void main()
{
   int  Weight_Item1= 15;

   int  No_of_item1 = 5;

    int   Weight_Item2= 25;

    int No_of_item2= 4;

    int total = Weight_Item1*No_of_item1 + Weight_Item2*No_of_item2;
    float ave = total/(No_of_item1+No_of_item2);
    printf("Average => %.2f",ave);

}

