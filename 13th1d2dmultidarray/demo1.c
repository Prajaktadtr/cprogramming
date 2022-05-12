// Single Dim array of user defined size 
// add all array elements to find the sum of them 
// Find the greatest and lowest among array elements
#include <stdio.h>
#include<conio.h>

#define MAX 100 // macro definition

void main()
{
	int A[MAX],n,i;
	int mx=0,mn=999;
	int sum=0;
	printf("Enter no of sub of single dim array \n");
	scanf("%d",&n);
	// Enter data in one dim array 
	for(i=0;i<n;i++)
	{
		printf("Enter Element for A[%d] :",i);
		scanf("%d",&A[i]);
		sum+=A[i];
	}
	// print all elements of 1-D array 
	printf("Subscript \t Element \n");
	for(i=0;i<n;i++)
		printf("A[%d]\t%d\n",i,A[i]);

printf("Summation of all array elements :%d\n",sum);
// Logic for determine greatest and lowest among all array elements 
mx=A[0];
mn=A[0];
for(i=1;i<n;i++)
	{
	if(A[i]>mx)
		mx=A[i];
	if(A[i]<mn)
		mn=A[i];
	}

	printf("Greatest Element :%d \t Lowest Element :%d\n",mx,mn);

}
