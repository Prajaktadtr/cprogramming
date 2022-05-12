//User defined functions for the following 2. Read a String to print reverse.
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char A[50],c;
    int l,i;
    printf("enter string");
    gets(A);
    l=strlen(A);
    for(i=0;i<l/2;i++)
    {
        c=A[i];
        A[i]=A[l-1-i];
        A[l-1-i]=c;
    }
    printf("reverse of a string is %s",A);
}