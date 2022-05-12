/* construct a single dim array of charecters to find list  all element with sub */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
    {
        char A[100];
        int i,size=0;
         printf("enter a string");
         gets(A);
         size=strlen(A);
         for(i=0;i<size;i++)
         {
             printf("\nA[%d]\t\t%c",i,A[i]);
         }
        // for(i=0;i<10;i++)
        // {
        //     printf("value of A[%s]",A[i]);
        //     scanf("%s",&A[i]);
        //     // printf("A[%s]",A[i]);

        // }
        // for (i=0;i<10;i++)
        // {
        // printf("A[%s]",A[i]);
        // }
    }
