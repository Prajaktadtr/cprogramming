//3. Read nos till their summation remains less than or equal to 100 . Count total nos entered.
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,no,sum=0,count=0;
    for(i=1;i<=100;i++)
    {
        printf("enter no:");
    scanf("%d",&no);
    sum=sum+no;
    count=i;
    if(sum>=100)
    break;


    }
    printf("sumation of no is = %d",sum);
    printf("\nno of time no entered =%d",count);
}
