// A pro for developing a matrix 
#include <stdio.h>
#include<conio.h>

#define MAX 100

void main()
{
	int A[MAX][MAX],m,n,r,c;
	int Cs[MAX];
	int rs=0;
	int Trace,Ld;

	printf("Enter a Size of MAT :");
	scanf("%d%d",&m,&n);

	// Construct a MAT 
	printf("Enter Elements in a MAT\n");
	for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++)
		{
			printf("Enter Data for A[%d][%d] :",r,c);
			scanf("%d",&A[r][c]);
		}
	}

	// Logic for print MAT 
	printf("Mat elements follows \n");
	for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++)
		{
			printf("%4d",A[r][c]);
		}
		printf("\n");
	}
 // Logic for row-wise Summation 
printf("Row-Wise Summation :");
for(r=0;r<m;r++)
	{
	rs=0;
	for(c=0;c<n;c++)
		{
		printf("%4d",A[r][c]);
		rs+=A[r][c];
		}
		printf("====>%4d\n",rs);
	}
// Logic for Colum-Wise Summation 
printf("Column Wise Summation \n");
for(c=0;c<n;c++)
	{
	Cs[c]=0;
	for(r=0;r<m;r++)
		{
		Cs[c]+=A[r][c];
		}
	}
	printf("==========\n");
	for(c=0;c<n;c++)
		printf("%4d",Cs[c]);

// Find Transpose of a MAT 
printf("Transpose of a MAT \n");
for(r=0;r<m;r++)
	{
	for(c=0;c<n;c++)
		{
		printf("%4d",A[c][r]);
		}
		printf("\n");
	}
	// Find Trace of a Square Matrix - Lower Diagonal 
	Trace=0;
	for(r=0,c=0;r<m;r++,c++)
		Trace+=A[r][c];

	printf("Trace of a MAT :%d\n",Trace);
	
	// Find summation of Upper Diagonal Element 
		Ld=0;
		for(r=0,c=n-1;r<m;r++,c--)
		Ld+=A[r][c];

		printf("Summation of Upper Diagonal Elements :%d\n",Ld);


}
