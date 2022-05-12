// Understanding nesting of a function 
#include <stdio.h>
#include<conio.h>

void printline(char);
int dsum(int);

void main()
{
	int n;
	printf("Enter a No :");
	scanf("%d",&n);
	printline('=');
	printf("Digital sum of number :%d\n",dsum(n));

printf("\n");
printline('@');

}

// definition of line print function 
void printline(char x)
{
	int i;
	for(i=1;i<=80;i++)
		printf("%c",x);
}

// definition of digital sum 
int dsum(int n) // 1234
{
	printf("\n");
	printline('*');
	int ds=0;
	while(n>0)
	{
	ds+=(n%10);
	n/=10;
	}
	return ds;
}



