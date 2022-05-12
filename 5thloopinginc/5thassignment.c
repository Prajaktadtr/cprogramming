//5. Read a no to check prime ( a no divisible by 1 and itself)
#include<stdio.h>
#include<conio.h.>
void main()
{
    int n,i=0,flag=0;
    printf("enter no");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("number is not prime");
            break;

        }
        flag=1;
        if(flag==0)
        {
        printf("number is prime");
        }
    }
}
