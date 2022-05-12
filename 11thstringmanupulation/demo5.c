// read a String and check whether it is palindrom or not 
/*
reverse of a String is equal to a same string 
nitin
wow
mom
madam
dad
*/
#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[20];
	int i,j;
	printf("Enter a String :");
	scanf("%s",&str);
	// Logic for checking palindrom or not 
	for(i=0,j=strlen(str)-1;i<=j;i++,j--)
	{
		if(str[i]!=str[j])
			break;
	}
	if(i>j)
		printf("%s is a palindrom \n",str);
	else
		printf("%s is not a palindrom\n",str);
}
