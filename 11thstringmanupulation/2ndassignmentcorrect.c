/*program which returns no of  occurance of charectors in string */

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[200],a;
int i,j,count=0;
printf("enter string:");
gets(str);
printf("enter which charecter u want to count\t");
scanf("%s",&a);
for(a='a'; a<='z';a++)
{
for(i=0;str[i]!='\0';i++)
{
    if(a==str[i])
    count++;
}
if(count>0)
printf("%c found in %d times\n",a,count);
}
}