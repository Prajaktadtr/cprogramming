#include<stdio.h>
#include<conio.h>

int main()
{
    char n1[20],n2[20],n3[20];
    float a,b,c,d,sum;
    
    printf("enter 3 person name");
    scanf("%s%s%s",&n1,&n2,&n3);
    printf("enter persons age");
    scanf("%f%f%f",&a,&b,&c);
    printf("\nname of a person %s\n%s\n%s",n1,n2,n3);
    printf("\nage of person is %f%f%f",a,b,c);
    sum=a+b+c;
    printf("sum is %f",sum);
    d=sum/3;
    printf("\navg is %f",d);
    
    if(a>b&&a>c)
    
    {
        printf("\n%s is eldest",n1);
        
    }
    else if(b>a&&b>c)
    {
        printf("%s is eldest",n2);
    }
    else if(c>a&&c>b)
    {
        printf("%s is eldest",n3);
    }
    if(a<b&&a<c)
    
    {
        printf("\n%s is yongest",n1);
        
    }
    else if(b<a&&b<c)
    {
        printf("%s is yongest",n2);
    }
    else if(c<a&&c<b)
    {
        printf("%s is yongest",n3);
    }
    
}
