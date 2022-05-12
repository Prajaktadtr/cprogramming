// Array of Undefined Subscript
#include <stdio.h>
#include<conio.h>
void main()
{
	int A[]={10,20,30,40,50,60,70,80,90,100};
	int i,n;
	
	n=sizeof(A)/2; // total elements = Sizeof Array/2 - size of int
	
    printf("Array Subscript \t Element \t Memory Address \n");
	for(i=0;i<n;i++)
		printf("A[%d]\t%d\t%u\n",i,A[i],&A[i]);



}
