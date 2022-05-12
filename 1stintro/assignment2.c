#include<stdio.h>
#include<conio.h>
void main()
{
    float initial,final,bill;
    char name[20];
    int mn,initialr,finalr,reading;
    printf("Enter customer name : ");
    scanf("%s",&name);
    printf("enter meter no.");
    scanf("%d",&mn);
    printf("enter initial reading");
    scanf("%d",&initialr);
    printf("enter final reading");
    scanf("%d",&finalr);
    reading=finalr-initialr;
    printf("\nfinal reading :%d",reading);
    bill=reading*3.50;
    printf("\nbill of electricity=%frs",bill);
    getch();
}