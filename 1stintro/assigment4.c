#include<stdio.h>
#include<conio.h>
void main()
{
    float s=65,fc=45,distance,avg,totaltime;
    printf("Enter total distance");
    scanf("%f",&distance);
    totaltime=distance/s;
    printf("total time is:%.2f",totaltime);
    avg=distance/fc;
    printf("\navg is%.2f",avg); 
    getch();
}
