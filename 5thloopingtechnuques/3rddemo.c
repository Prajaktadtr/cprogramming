//Read a Four Digit no to print it using Alphabate 
// i.p 1234 o.p One Two Three Four 
#include <stdio.h>
#include <conio.h>

void main()
{
	int n,a=1000;
	printf("Enter any Four Digit No :");
	scanf("%d",&n); // 1234/1000
	while(n>0)
	{
		switch(n/a)
		{
			case 1:
				printf("One ");
			break;
			case 2:
				printf("Two ");
			break;
			case 3:
				printf("Three ");
			break;
			case 4:
				printf("Four ");
			break;
			case 5:
				printf("Five ");
			break;
			case 6:
				printf("Six ");
			break;
			case 7:
				printf("Seven ");
			break;
			case 8:
				printf("Eight ");
			break;
			case 9:
				printf("Nine ");
			break;
			default :
				printf("Zero ");
	
		}// End of Switch
		n=n-(n/a)*a; // 1234-1*1000 --n-234
		a=a/10; // a=100
	}// End of while

}
