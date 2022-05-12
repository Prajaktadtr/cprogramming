//demonstration on multi dim array
#include<stdio.h>
#include<conio.h>

void main()
{
    int mark[10][5][2][2];
    int i,j,k,l;
    printf("enter marks data");
    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            for(k=0;k<2;k++)
            {
                for(l=0;l<2;l++)
                {
                    printf("enter marks of student %d\tsub%d\tpaper%d\ttest%d\ttest%d\t",i,j,k,l);
                 scanf("%d",mark[i][j][k][l]);
                }
            }
        }
    }
}