#include<stdio.h>
#include<conio.h>

int main()
{
    char n1[20],n2[20],n3[20];
    float a,b,c,d,sum;
    
    printf("enter book name\nauther name");
    scanf("%s%s",&n1,&n2);
    printf("enter prize");
    scanf("%f",&a);
    printf("enter quantity");
    scanf("%f",&b);
    printf("\nbook name is %s\nauther name is%s",n1,n2);
    printf("\nprize is %f",a);
    printf("\nquantity is %f",b);
    c=0.20*a;
    printf("\nnet prize is %f",c);
}