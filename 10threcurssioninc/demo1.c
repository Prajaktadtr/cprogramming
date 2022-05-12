// A pro to find the factorial of a no using recursion 
// n=n x n-1 x ....1
#include <stdio.h>
#include<conio.h>

int facto(int); // function prototype 

void main()
{
		int n;
		printf("Enter a no :");
		scanf("%d",&n);
		printf("Factorial of a no :%d\n",facto(n)); // 4-24
}// End of main 

// recursive factorial - not to use a loop, refer to itself
int facto(int n) //4
{
	int f;
	if(n==1)
		return 1;
	else
	f=n*facto(n-1); // re-refer from its own definition

	return f;
   }
/* Explanation 
   
   f=4*6 =24
   f=3*2
   f=2*1
	*/