// Demonstrating pointers 
#include <stdio.h>
#include<conio.h>
void main()
{
	int A=5; // premitive type
	int *B; // declaration -derived type
	
	B=&A; // B points (ref) to A
	printf("Value of A :%d\n",A);
	printf("Memory Address of A :%u\n",&A);
	printf("Value Holds by B:%u\n",B);
	printf("Address of B :%u\n",&B); // Address of B
	printf("Memory size of B %d\n",sizeof(B));
	printf("Value ref by B :%d\n",*B);
	*B+=5; // A+=5
	printf("value of A :%d\n",A);
	
}
