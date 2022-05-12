//Code for pattern generation 
/*
1
1 2 
1 2  3 
12 3  4 
12 3 4 5 
*/

#include <stdio.h>
#include<conio.h>

void main()
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%4d",c);
		}
		printf("\n");
	}
}
