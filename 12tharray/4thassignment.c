/* construct a one dim array of integers to find max */
#include<stdio.h>
#include<conio.h>
void main()
{
    int A[10];
    int i,max;
    for (i=0;i<10;i++)
    {
        printf("enter value of A[%d]",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<10;i++)
    {
        if(max<A[i])
        {
            max=A[i];
        }
    }
    printf("max of no is %d",A[i]);
}