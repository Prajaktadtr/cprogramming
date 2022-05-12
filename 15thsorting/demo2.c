/*Insertion sort in C: C program for insertion sort to sort numbers. This code implements insertion sort algorithm to arrange numbers of an array in ascending order. With a little modification, it will arrange numbers in descending order.
*/
// Insertion sort algorithm implementation in C
/* Insertion sort ascending order */
 
#include <stdio.h>
 
void main()
{
  int n, array[1000], c, d, t;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }
 
  for (c = 1 ; c <= n - 1; c++) {
    d = c;
 
    while ( d > 0 && array[d-1] > array[d]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
 
      d--;
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);
  }
 
  
}
