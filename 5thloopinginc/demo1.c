/*Read a no and print reverse 
i.p 1234   o.p 4321
     n=1234 
	 n=n/10 ---123
	 n%10 --4
*/
#include <stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("Enter a No :");
	scanf("%d",&n);
	// Logic for printing reverse of a no 
	while(n>0)
	{
		printf("%d",n%10);//4 3 2 1
		n/=10;
	}

}