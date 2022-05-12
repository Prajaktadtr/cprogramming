//Demonstrating static 
#include <stdio.h>
#include <conio.h>

void f1(void);

void main()
{
int i;
for(int i=1;i<=5;i++)
	f1();
	
}

void f1(void)
{
	static int x=5; // local variable 
	printf("%d\n",x);
	x++;
}