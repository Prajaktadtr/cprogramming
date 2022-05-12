// Read a String and change case of it 
/*
i/p - abcd
o/p - ABCD
ASCII values - 0 - 255
A - 65 
Z - 91
a-97
z-123

A - a -32
*/
#include <stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char str[20];
int i;
printf("Enter a String in any Case :");
scanf("%s",&str);
// Change Case Logic 
for(i=0;i<strlen(str);i++)
	{
	// Case for capital case 
	if(str[i]>=65 && str[i]<91)
		str[i]+=32;
	else if(str[i]>=97 && str[i]<123)
		str[i]-=32;
	}
	printf("Change case String :%s\n",str);
}
