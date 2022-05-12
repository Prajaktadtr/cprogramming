/*3. Read any name and print it for 20 times on the screen 
	read - Ankita
	1 Ankita 
	2 Ankita
	20 Ankita*/
    #include <stdio.h>
#include<conio.h>

void printname(char []);

void name(char []);

void main()
{
	char nm[10];
	printf("Enter your name :");
	scanf("%s",&nm);
	printname(nm);

}


// function definition

void printname(char x[])
{
	int i;
	for(i=1;i<=20;i++)
		printf("%d\t%s\n",i,x);
    name(x);
}

void name(char x[])
{
    printf("%s is a strong girl",x);
}