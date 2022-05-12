// Matrix Addition 
#include <stdio.h>
#include<conio.h>
void main()
{
	int A[3][3]={1,2,3,4,5,6,7,8,9};
	int B[3][3]={10,11,12,13,14,15};
	int C[3][3];
	int r,c;
	
	printf("Elements of A MAT\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%4d",A[r][c]);
		}
		printf("\n");
	}
	printf("Elements of B MAT\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%4d",B[r][c]);
		}
		printf("\n");
	}
// Logic for MAT Addition 
printf("Elements of C MAT\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			C[r][c]=A[r][c]+B[r][c];
			printf("%4d",C[r][c]);
		}
		printf("\n");
	}





	


}
