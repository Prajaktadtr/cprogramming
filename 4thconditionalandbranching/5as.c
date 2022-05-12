#include<stdio.h>
#include<conio.h>
int main()
{
    char nm[20];
    float  a,b,c,d;
    printf("enter persons age");
    scanf("%f",&a);
    printf("age of person  is %f",a);
    if (a<=18)
    {
        printf("jr.kid");
        
    }
    if (a<18)
    {
        printf("jr.kid");
        
    }
    if (a>=18&&a<25)
    {
        printf("yong age");
        
    }
    if (a>=25&&a<40)
    {
        printf("Career age");
        
    }
    if (a>=40&&a<60)
    {
        printf("mid age");
        
    }
    if(a>=60)
    {
        printf("old age");
    }
    
}
