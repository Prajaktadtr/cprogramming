/* construct  a single dim array of integers to find min */
#include<stdio.h>
#include<conio.h>
void main()
{
    int A[10];
    int i,min;
    for(i=0;i<10;i++)
    {
        printf("enter the value of A[%d]",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<10;i++)
    {
        if(min>A[i])
        {
            min=A[i];
        }
    }
    printf("min of no is %d ",min);
}