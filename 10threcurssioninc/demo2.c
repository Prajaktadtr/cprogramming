// Find 10 multiples of a given no
#include <stdio.h>
#include<conio.h>
void multi(int ,int);

void main()
{
	int n;
	printf("Enter a no :");
	scanf("%d",&n);
	multi(n,10); // computes 10 mutliples of a no
	
}


void multi(int n,int m)
{
	if(m==0)
		return ;
	printf("%d\n",n*(11-m));

	multi(n,--m);

return ;
}