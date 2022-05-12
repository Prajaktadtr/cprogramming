//2. Read your name to print for 20 times on screen using counter 
#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    char name[20];
    printf("enter your name:");
    scanf("%s",&name);
    printf("your name is %s\n",name);
    for(i=1;i<=20;i++)
    {
        printf("your name is %s\n",name);
    }

}