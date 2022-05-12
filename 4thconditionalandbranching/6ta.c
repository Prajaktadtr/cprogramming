#include<stdio.h>
#include<conio.h>
int main()
{
    char nm[20];
    float  a,b,c,d;
    printf("enter prize");
    scanf("%f",&a);
    printf("prize  is %f",a);
    if (a<1500)
    {
     b=a;
     printf("\nprize is %f",b);
        
    }
    if (a>=1500 && a<4500)
    {
    c=a*0.02;
    b=a-c;
      printf("prize is %f you will get discount 2percent",b);
        
    }
    if (a>=4500&&a<6000)
    {
       c=0.04*a;
       b=a-c;
       printf("\nprize is %f you will get discount 4percent",b);
        
    }
    if (a>=6000)
    {
      c=0.8*a;
      b=a-c;
      printf("\n prize is %f you will get discount 8 percent",b);
        
    }
    
    
}
