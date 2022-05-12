// Array 1
// Declare an array of defined subscript , insert elements in it
#include <stdio.h>
#include<conio.h>

void main()
{
	int A[10]; // array of size 10
	int i; // array Counter 

	// Logic for inserting data in an array 
	for(i=0;i<10;i++)
	{
		printf("Enter Data for A[%d] :",i);
		scanf("%d",&A[i]);
	}
	
    // Logic for Displaying array Elements , Memory Positions
	
    printf("Array Sub\tElement \t Memory Address \n");
	for(i=0;i<10;i++)
	{
		printf("A[%d]\t%d\t%u\n",i,A[i],&A[i]);
	}

	
}
