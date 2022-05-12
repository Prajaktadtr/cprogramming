/* write a program to sort a given no and search element in it */
#include<stdio.h>
#include<conio.h>
void main()
{
    int A[100],search,i,swap,n,j;

    printf("enter no of elements in array\n");
    scanf("%d",&n);

    printf("enter %d integers\n",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    //bubble sort
for(i=0;i<(n-1);i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(A[j]>A[j+1])
        {
            swap=A[j];
            A[j]=A[j+1];
            A[j+1]=swap;
        }
    }
}
printf("sorted list in ascending order\n");

for(i=0;i<n;i++)
{
    printf("%d\n",A[i]);
}

printf("enter no to search \n");
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