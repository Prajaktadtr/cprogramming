#include<stdio.h>
#include<conio.h>
void main()
{
    float temp,far;
    printf("Enter tempreture");
    scanf("%f",&temp);
    printf("tempreture in drgree celcius %f",temp);
    far=temp*(9/5)+32;
    printf("\ntempreture in faranite is %f",far);
    getch();
}