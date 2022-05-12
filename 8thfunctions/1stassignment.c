//User defined functions for the 1. Read a no to print reverse .
#include<stdio.h>
#include<conio.h>

int rev(int); //function declaration
void main()
{
    int n;
    printf("enter no:");
    scanf("%4d",n);
	rev(n); //function calling
  printf("reverse of no is : %4d",rev(n));

}
int rev(int n)
{
	int  reverse=0, rem;    
//printf("Enter a number: ");    
  //scanf("%d", &n);    
  while(n!=0)    
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  }    
 printf("Reversed Number: %d",reverse);   
return 0;
	}



