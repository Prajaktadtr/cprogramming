/*functions to convert case of given string */
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[500];
    int i;
    printf("enter string\n");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>=65 && str[i]<91)
        str[i]+=32;
        if(str[i]>=97 && str[i]<123)
        str[i]-=32;
    }
printf("\n change case sting is %s\n",str);
}
