//Code for pattern generation 
/*
1 1 1 1 1 
2 2 2 2 
3 3 3 
4 4 
5
*/

#include <stdio.h>
#include<conio.h>


int main(int argc, char *argv[])
{
int r,c;
for(r=1;r<=5;r++)
	{
	for(c=5;c>=r;c--)
		{
			printf("%4d",r);
		}
		printf("\n");

	}
}