/*to print a pattern
 A A A A A 
  B B B B
  C C C
  D D 
  E 
     */
#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=5;c>=r;c--)
        {
            printf("%c",64+r);
        }
        printf("\n");
    }

}