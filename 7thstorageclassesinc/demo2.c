//Demonstrating global variable 
#include <stdio.h>
#include<conio.h>

int a=5; // global variable having scope throught the program

void f1(void);

void main()
{
	printf("value of a :%d\n",a); //5
	f1();
	printf("final value of a :%d\n",a); //10
	
}


void f1(void) 
{
	a+=5;//a=a+5
	printf("Updated value of a :%d\n",a); //10
}