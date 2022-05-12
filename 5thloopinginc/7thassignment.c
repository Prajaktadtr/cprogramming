//7. Read a no to find 10 multiple
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