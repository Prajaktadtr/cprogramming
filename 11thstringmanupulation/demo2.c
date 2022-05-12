// Read a String and check no of vowels and consonents in it 
// a,e,i,o,u ---vowels , consonents 
#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[20];
int i,vc=0,cc=0;
printf("Enter a String :");
scanf("%s",&str);
// logic for counting no of vowels and consonents 
for(i=0;i<strlen(str);i++)
	{
	if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' ||str[i]=='u')
		vc++;
	else 
		cc++;
	}
printf("No of vowels :%d \t No of consonents :%d\n",vc,cc);

}
