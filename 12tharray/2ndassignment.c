/* construct a single dim array of int to find its sum */
#include<stdio.h>
#include<conio.h>
void main()
{
    int A[5];
    int i,a=0;
    for(i=0;i<5;i++)
    {
        printf("enter value of A[%d]",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<5;i++)
    {
        a=a+A[i];

    }
    printf("sum of integers is %d",a);
}