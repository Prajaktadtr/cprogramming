/*5)

     A
     B B
     C C C
     D D D D
     E E E E E
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
            printf("%c",64+r);
        }
        printf("\n");
    }
}