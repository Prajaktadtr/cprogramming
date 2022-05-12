/*write a program to search a number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int A[100],i,c,search,n;

    printf("enter the no of elements in array A\n");
    scanf("%d",&n);

    printf("enter %d integers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
        printf("enter the no to search\n");
        scanf("%d",&search);
    
for(i=0;i<n;i++)
{
    if(A[i]==search)
    {
        printf("%d is at location %d",search,i+1);
        break;
    }
}
if(i==n)
{
    printf("%d is not present in array\n",search);
}

}