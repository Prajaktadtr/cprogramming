//read a no to check armstrong or not 
#include <stdio.h>
#include<conio.h>
void main()
{
	int n,dsum=0,d,temp;
	printf("Enter a No :");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		d=n%10;
		dsum+=(d*d*d);
		n/=10;
	}

	if(dsum==temp)
		printf("%d is an armstrong no \n",temp);
	else 
		printf("%d is not an armstrong no \n",temp);


}