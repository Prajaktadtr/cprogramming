/*1. read a no and find 10 multiples of it .
	read a no -5 
	5 ,10,15....50*/
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