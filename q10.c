#include<stdio.h>
int main()
{
    int sec;

    printf("Input Timne in Seconds: ");
    scanf("%d",&sec);

    int hour = sec/3600;
    int  remining_sec= sec%(60*60);
    int min = remining_sec/60;
    int second=sec%60;

    printf("%d:%d:%d",hour,min,second);
    
    return 0;

}