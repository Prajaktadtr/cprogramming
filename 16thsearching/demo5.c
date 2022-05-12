// Implementation of Binary Search 
#include <stdio.h>
#include<conio.h>
void main()
{
	int A[]={10,20,30,40,50,60,70,80,90,100};
	int n,i,Mid,E,pos;
	/*
	A- Array of Sorted Elements 
	n - Size of an array 
	i-Array Counter 
	Mid - Mid Position 
	E- Element to Search
	pos- found position 
	*/

	n=sizeof(A)/2; // Size of an array 
	Mid=A[n/2];
	printf("Enter Element to Search :");
	scanf("%d",&E);
	// Apply Binary search 
	if(E==Mid)
	{
		pos=n/2;
		printf("Found at position :%d\n",pos);
	}
	else if(E<Mid)
	{
		for(i=(n/2)-1;i>=0;i--)
		{
			if(E==A[i])
			{
				pos=i;
				break;
			}
		}
	}
	else if(E>Mid)
	{
		for(i=(n/2)+1;i<n;i++)
		{
			if(E==A[i])
			{
				pos=i;
				break;
			}
		}
	}
// Confirm Search 
printf("Element found at Position :%d\n",pos);
	
}

/* Prototype of binary Search 

int binary(int [],int,int);

*/