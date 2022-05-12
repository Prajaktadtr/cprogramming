/*program which returns no of  occurance of charectors in string */

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[200];
int i,j,count=1;
printf("enter string:");
gets(str);
for(i=0;str[i]!='\0';j++)
{
    count=1;
for(j=i+1;str[j]!='\0';j++)
{
    if(str[i]==str[j])
    {
    count++;
    
}
}
}
printf("\n %c appeared %d times",str[i],count);
}