//6. Read a no to check Armstrong (153 -- 1^3+ 5^3 + 3^3= 153 , sum of cube of all digits is equal to a no )
#include<stdio.h>
#include<conio.h>
int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}