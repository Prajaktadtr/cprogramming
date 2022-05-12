//Read a no and find its digital sum 
// i.p 1234  o.p 10 
#include <stdio.h>
#include<conio.h>
void main()
{
	int n, dsum=0;
	printf("Enter a No :");
	scanf("%d",&n);
	// Logic to find digital sum 
	while(n>0)
	{
		dsum+=(n%10);
		n/=10;
	}
	printf("Digital Sum :%d\n",dsum);
}
