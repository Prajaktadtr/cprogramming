/*construct a single dim array to find list all elements with sub/index */
#include<stdio.h>
#include<conio.h>

void main()
{
    int A[10];
    int i;
    for (i=0;i<10;i++)
    {
        printf("enter data for A[%d]",i);
        scanf("%d",&A[i]);

    }
    for(i=0;i<10;i++)
    {
        printf("A[%d]\n",A[i]);
    }
}
