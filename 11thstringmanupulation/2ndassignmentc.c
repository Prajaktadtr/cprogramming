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
a=getchar();
for(i=0; str[i];i++)
{
    if(str[i]==a)
    {
    count++;
    }
    // printf("%c apperars %d no of times \t",a,count);
}
printf("%c apperars %d no of times \t",a,count);
}