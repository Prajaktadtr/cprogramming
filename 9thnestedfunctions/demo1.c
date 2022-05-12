// nesting of a function - referring a function from anothers definition
#include <stdio.h>
#include<conio.h>

void f1(void);
void f2(void);
void f3(void);
void f4(void);

void main()
{

	printf("I'm in main\n");
	f1(); // calling f1
	printf("Back to main() \n");
}

void f1(void)
{
	printf("I'm in F1 definition \n");
	f2();
	printf("Back to f1\n");
}

void f2(void)
{
	printf("I'm in F2 definition \n");
	f3();
	printf("Back to F2\n");

}

void f3(void)
{
printf("I'm in F3 definition \n");
	f4();
	printf("Back to f3\n");
}

void f4(void)
{
printf("I'm in F4 definition \n");
printf("returning back \n");
}
