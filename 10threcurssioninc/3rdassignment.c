/*3. Read any name and print it for 20 times on the screen 
	read - Ankita
	1 Ankita 
	2 Ankita
	20 Ankita*/
    #include <stdio.h>
#include<conio.h>

void printname(char [],int i);

void main()
{
	char nm[10];
	printf("Enter your name :");
	scanf("%s",&nm);
	printname(nm,20);

}


// function definition

void printname(char nm[],int i)
{
	// int i;
	// for(i=1;i<=20;i++)
	// 	printf("%d\t%s\n",i,x);

char name[20];
if(i>=0)
{
	// name=printname(nm,20);
printf("%s\n",nm);
printname(nm,--i);
}

}
