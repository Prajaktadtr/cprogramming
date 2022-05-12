/*4. Print all even nos in the range 0- 100 and print summation
	2
	4
	--
	2550*/
    // Find sum of all even nos in the range 0-100
#include <stdio.h>
#include<conio.h>

int esum(int);

void main()
{

	printf("Summation of all even in the range 0-100 :%d\n",esum(0));
}


int esum(int n)
{
	int s;
	if(n==100)
		return 100;
s=n+esum(n+=2);

return s;
}