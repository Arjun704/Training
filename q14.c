// 14. Write a C program to print the following characters in a reverse  
//   way.

//     Test Characters: 'X', 'M', 'L'



//     Expected Output:

//     The reverse of XML is LMX

#include<stdio.h>
void main()
{
    char ch[3]={'X','M','L'};
    for (int i=0;i<3 ;i++)
    {
        printf("%c  ",ch[i]);
    }
    printf("The reverse of ");

    for(int i=2;i>-1;i--)
    {
       printf("%c  ",ch[i]);
    }
    
    
}
