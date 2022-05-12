//Program for pattern generation 
/*
*
* *
* * *
* * * *
* * * * * 
* * * *
* * *
* *
*
*/

#include <stdio.h>
#include<conio.h>
void main()
{
	int r,c;
	// incrementing pattern 
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf(" * ");
		}
		printf("\n");
	}
 // decrementing pattern
 for(r=1;r<=4;r++)
	{
	 for(c=4;c>=r;c--)
		{
			printf(" * ");
		}
		printf("\n");
	}
}