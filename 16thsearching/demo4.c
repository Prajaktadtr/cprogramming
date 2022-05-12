/* C program for binary search
C program for binary search: This code implements binary search in C language. It can only be used for sorted arrays, but it's fast as compared to linear search. If you wish to use binary search on an array which is not sorted, then you must sort it using some sorting technique say merge sort and then use the binary search algorithm to find the desired element in the list. If the element to be searched is found then its position is printed. The code below assumes that the input numbers are in ascending order.
*/
// C programming code for binary search
#include <stdio.h>
 
int main()
{
   int c, first, last, middle, n, search, array[100];
 
   printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("Enter %d integers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
 
   printf("Enter value to find\n");
   scanf("%d", &search);
 
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);
 
   return 0;   
}