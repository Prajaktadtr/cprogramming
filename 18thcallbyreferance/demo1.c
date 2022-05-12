// Call by reference 
#include <stdio.h>
#include<conio.h>
void exchange(int * ,int *);
void main()
{
	int A=5,B=7;

	
	printf("Value of A:%d\t Value of B:%d\n",A,B); // 5 ,7
	exchange(&A,&B); // Call by reference 
	printf("Exchaneged Value of A:%d\t Value of B:%d\n",A,B); // 7,5 

}


void exchange(int *C,int *D)
{
	int T=*C;
	
	*C=*D;
	*D=T;
}