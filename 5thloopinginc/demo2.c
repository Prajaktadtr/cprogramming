//Read a no to find factorial 
// n != n x n-1 x n-2 x n-3....1

#include <stdio.h>
#include<conio.h>
void main()
{
	int n,f=1;
	printf("Enter a No :");
	scanf("%d",&n);
	// Logic for factorial
	while(n>0)
	{
		f*=n;
		n--;
	}

	printf("Factorial of a no :%d\n",f);

}
