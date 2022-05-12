//User defined functions for the following 3. Find digital sum of given no 
#include<stdio.h>
#include<conio.h>
int sum(int);

void main()
{
    int n;
    printf("enter no:");
    scanf("%d",&n);
    int sum(int);
    printf("digital sum of a no=%d",n);
    
}
int sum(int n)
{
    int dsum=0;
    while(n>0)
	{
		dsum+=(n%10);
		n/=10;
	}
	printf("Digital Sum :%d\n",dsum);
    return n;
}