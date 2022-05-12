/*6)

     A B C D E 
     A B C D
     A B C 
     A B
     A 
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
            printf("%c",70-c);
        }
        printf("\n");
    }
}