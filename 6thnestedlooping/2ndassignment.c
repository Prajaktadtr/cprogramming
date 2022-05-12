/*to print a pattern
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,n;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%4d",r);
        }
        printf("\n");
    }
}
