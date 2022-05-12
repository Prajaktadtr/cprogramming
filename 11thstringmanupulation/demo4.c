// String pattern
/* 
i/p AxiomTechGuru
o.p 
A
Ax
Axi
Axio
Axiom
....
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
// pattern generation of a String 
for(i=0;i<strlen(str);i++)
	{
	for(j=0;j<=i;j++)
		{
		printf("%c",str[j]);
		}
		printf("\n");
	}

}
