/* construct a single dim array of charecters to find all string starts with vowels */
#include<stdio.h>
#include<conio.h.>
#include<string.h>
void main()
{
    char A[100];
    int i,j,k,c=1,len;
    printf("enter a string");
    gets(A);
    char temp[300];
    temp[0]=' ';

    for (c=0; c<strlen(A); c++)
    {
        temp[c+1]=A[c];
    }
len=strlen(temp);

for(i=0;i<len;i++)
{
    if(temp[i]==' ')
    {
        i++;
        if(temp[i]=='a' || temp[i]=='e' || temp[i]=='i' || temp[i]=='o' || temp[i]=='u' ||
        temp[i]=='A' || temp[i]=='E' || temp[i]=='I' || temp[i]=='O' || temp[i]=='U')
        {

            for(j=i; j<len; j++)
            {
                if(temp[j]!=' ')
                {
                    printf("%c",temp[j]);

                }
                else
                {
                    i=j-1;
                    break;

                }
            }
        }
    }
    printf(" ");
}
}

