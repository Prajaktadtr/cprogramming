//Read nos till their summation remains <=100 and count total nos entered

#include <stdio.h>
#include<conio.h>
void  main()
{
	int n,sum=0,cnt=0;
	do
	{
		printf("Enter a no :");
		scanf("%d",&n);
		sum+=n;
		cnt++;
	}while(sum<=100);

	printf("Total nos entered :%d\n",cnt);
	printf("Summation :%d\n",sum);