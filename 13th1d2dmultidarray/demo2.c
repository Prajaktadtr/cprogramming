// Demonstrating 2-D array 
// Read size of mat ,insert and print element in the mat format
// find out row-wise summation
#include <stdio.h>
#include<conio.h>

#define MAX 100

void main()
{
	int A[MAX][MAX];
	int m,n,i,j,rs=0;
	printf("Enter Size of a MAT :");
	scanf("%d%d",&m,&n);
	// Logic for inserting data into a MAT 
	for(i=0;i<m;i++) // represents rows
	{
		for(j=0;j<n;j++) // represents columns 
		{
			printf("Enter Element of A[%d][%d] ",i,j);
			scanf("%d",&A[i][j]);
		}
	}

	// Logic for printing the MAT elements, row-wise sum 
	printf("Matrix Elements follows \n");
	for(i=0;i<m;i++)
	{
		rs=0;
		for(j=0;j<n;j++)
		{
			printf("%4d",A[i][j]);
			rs+=A[i][j];
		}
		printf("-----%d",rs);
		printf("\n");
	}
	
}

/*
Enter size of mat - 3  x 3

1 2 3 ---6
4 5 6 ---15
7 8 9 ----24
*/

