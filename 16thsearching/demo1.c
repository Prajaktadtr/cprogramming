// Referal Code 
/*Linear search in C
Linear search in C programming: The following code implements linear search (Searching algorithm) which is used to find whether a given number is present in an array and if it is present then at what location it occurs. It is also known as sequential search. It is straightforward and works as follows: We keep on comparing each element with the element to search until it is found or the list ends. Linear search in C language for multiple occurrences and using function.
*/
// Linear search C program
#include <stdio.h>
#include<conio.h>
 
int main()
{
   int array[100], search, c, n;
 
   printf("Enter the number of elements in array\n");
   scanf("%d",&n);
 
   printf("Enter %d integer(s)\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 
   printf("Enter the number to search\n");
   scanf("%d", &search);
 
   for (c = 0; c < n; c++)
   {
      if (array[c] == search)     /* if required element found */
      {
         printf("%d is present at location %d.\n", search, c+1);
         break;
      }
   }
   if (c == n)
      printf("%d is not present in array.\n", search);
 
   return 0;
}
/*
Linear search for multiple occurrences
In the code below we will print all the locations at which required element is found and also the number of times it occur in the list.

#include <stdio.h>
 
int main()
{
   int array[100], search, c, n, count = 0;
 
   printf("Enter the number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d numbers\n", n);
 
   for ( c = 0 ; c < n ; c++ )
      scanf("%d", &array[c]);
 
   printf("Enter the number to search\n");
   scanf("%d", &search);
 
   for (c = 0; c < n; c++) {
      if (array[c] == search) {
         printf("%d is present at location %d.\n", search, c+1);
     count++;
      }
   }
   if (count == 0)
      printf("%d is not present in array.\n", search);
   else
      printf("%d is present %d times in array.\n", search, count);
 
   return 0;
}

// C program for linear search using function
#include <stdio.h>
 
long linear_search(long [], long, long);
 
int main()
{
   long array[100], search, c, n, position;
 
   printf("Input number of elements in array\n");
   scanf("%ld", &n);
 
   printf("Input %d numbers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%ld", &array[c]);
 
   printf("Input number to search\n");
   scanf("%ld",&search);
 
   position = linear_search(array, n, search);
 
   if (position == -1)
      printf("%d is not present in array.\n", search);
   else
      printf("%d is present at location %d.\n", search, position+1);
 
   return 0;
} 
 
long linear_search(long a[], long n, long find) {
   long c;
 
   for (c = 0 ;c < n ; c++ ) {
      if (a[c] == find)
         return c;
   }
 
   return -1;*/