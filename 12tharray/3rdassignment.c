/* construct a single dim array of integers to find aaverage */
#include<stdio.h>
#include<conio.h>
void main()
{
    int A[5];
    int i,a=0;
    float avg=0;
    for(i=0;i<5;i++)
    {
        printf("enter the value of A[%d]",i);
        scanf("%d",&A[i]);
    }

   for (i=0;i<5;i++)
   {
       a=a+A[i];
   }
   avg=a/5;
    printf("average of integers is %f",avg);
    
}