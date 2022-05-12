/*to print pattern
A
     A B
     A B C
     A B C D
     A B C D E
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%c",64+c);
        }
        printf("\n");
    }
}