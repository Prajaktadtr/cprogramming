/* construct an array of charectors to find all string starts with consonents */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char A[650];
    int i,j,c=1,k,len; 
    char temp[100];
    printf("enter a string");
    gets(A);
    temp[0]=' ';
    for(c=0;c<strlen(A);c++)
    {
        temp[c+1]=A[c];

    }
    len=strlen(temp);

    for(i=0;i<len;i++)
    {
        if(temp[i]==' ')
        {
            i++;
            if(temp[i]=='a' || temp[i]=='e' || temp[i]=='i' || temp[i]=='o' || temp[i]=='u' ||
            temp[i]=='A' || temp[i]=='E' || temp[i]=='I' || temp[i]=='O' || temp[i]=='U' )
            {

                for(j=i;j<len;j++)
                {
                    if(temp[j]!=' ')
                    {

                    }
                    else
                    {
                        i=j-1;
                        break;
                    }
                }

            }else
            for(k=i;k<len;k++)
            {
                if(temp[k]!=' ')
                {
                    printf("%c",temp[k]);
                }
                else
                {
                    i=k-1;
                    break;
                }
            }
        }
        printf(" ");
    }
}