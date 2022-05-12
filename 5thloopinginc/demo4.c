//Read a no to find 10 mutliples of a no 
/* 
i.p 5
5
10
15
..50
*/
#include <stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("Enter a no :");
	scanf("%d",&n);
	// Loop to print 10 mutliples 
	for(i=1;i<=10;i++)
		printf("%d\t%d=%d\n",n,i,(n*i));


}
