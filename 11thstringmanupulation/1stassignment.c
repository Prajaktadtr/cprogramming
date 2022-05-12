/*write a function which writes string in it and returns no of words in it. */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i;
    int count=1;
    char str[5000];
    printf("enter string\n");
    gets(str);
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ' && str[i+1]!=' ')
        count++;
        i++;
    }
    printf("\n number of words = %d",count);
    return 0;

}