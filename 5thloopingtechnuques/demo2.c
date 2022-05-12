//enerate Fibbonoci series for n terms 
#include <stdio.h>
#include <conio.h>

void main()
{
	int Ft=0,St=1,Rt,i,n;
	printf("How many terms required :");
	scanf("%d",&n);
	// Logic for generating Fibbonoci Series 
	printf("%4d,%4d",Ft,St);
	for(i=3;i<=n;i++)
	{
		Rt=Ft+St;
		printf("%4d",Rt);
		Ft=St;
		St=Rt;
	}
}
