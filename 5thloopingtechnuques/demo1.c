//Read a no to check prime or not
#include <stdio.h>
#include <conio.h>
void main()
{
		int n,flag=0,i;
		printf("Enter a No :");
		scanf("%d",&n);
		// Logic for checking prime or not
		for(i=2;i<n;i++)
	{
			if(n%i==0)
				flag=1;
	}

if(flag==0)
	printf("%d is a prime no :",n);
else 
	printf("%d is not a prime no:",n);

}