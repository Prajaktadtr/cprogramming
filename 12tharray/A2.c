//Q2)construct single dimention  string to find
//  1)list of all element with subscript
//  2)all string start with vovels .
//  3)all string start with consonant
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void listcharacter(char[],int);
void vowels(char[],int);
void consonent(char[],int);

char main()
{
    char str[300];
    int size=0,i,choice;

    printf("\n\t==== Enter the English Sentence ====\n\t");
    gets(str);
    size=strlen(str);
    printf("\n\n\t\tMemory size of arry is %d in Byte\n\n",size);
   /* for(i=0;i<size;i++)
    {
        printf("\nstr[%d]\t\t%c",i,str[i]);
    }*/
    //size=sizeof(str);
    while (1)
    {
        printf("\n\n\t===========ARRAY MENU===========\n\n");
        printf("\t1)List of all element with subscript\n\t2)all string start vovels\n\t");
        printf("3)All string start with consonant\n\t4)Enter array element again\n\t5)Exit");       
        printf("\n\t ENTER YOUR CHOICE = ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            {
                printf("\n\n LIST OF ARRAY ELEMENT WITH SUBSCRIPT\n\t");
                listcharacter(str,size);
                break;
            }
            case 2:
            {
                printf("\nAll string start vovels\n\t");
                vowels(str,size);
                break;
            }
            case 3:
            {
                printf("\nAll string start consonants\n\t");
                consonent(str,size);
                break;
            }
            case 4:
            {
                main();
                break;
            }
            case 5:
            {
                exit(0);
            }
            default:
            {
                printf("\n\t<<<<< WRONG CHOICE ENTER CORRECT ONE >>>>>>");
            }
        }
    }
      
    return 0;   
}
void listcharacter(char str[],int s)
{
    int i;

    printf("\n\nSubscript\t\tElement");
    for(i=0;i<s;i++)
    {                                       //axiom tech guru
        printf("\nstr[%d]\t\t%c",i,str[i]);//str[0]       a  
    }
}

void vowels(char str[],int s)
{
    int i,j,c=1,k,len;
    char temp[300];
    temp[0]=' ';
    for(c=0;c<s;c++)
    {
        temp[c+1]=str[c];
    }
    len=strlen(temp);//15
    for(i=0;i<len;i++) //i 0 1/- i=6,/- i=11 i=2
    {
            if(temp[i]==' ')
            {
                
                i++;  // i=1    i = 7 ,      
                if(temp[i]=='a'||temp[i]=='e'||temp[i]=='i'||temp[i]=='o'||temp[i]=='u'||
                   temp[i]=='A'||temp[i]=='E'||temp[i]=='I'||temp[i]=='O'||temp[i]=='U')
                {   
                    //i=1
                    for (j = i; j < len; j++) // j=1 /- 1 2 3 4 5 /- 7
                    {
                        
                        if(temp[j]!=' ')
                        {                         // 1 2 3 4 5  6  7 8  9  10  11 12  13  14  15
                            printf("%c",temp[j]); // A X I O M     T E  C  H       G  U    R   U
                                // 1 2 3 4 5 6     
                        }
                        else
                        {
                            i=j-1;// j = 5
                            break;
                        }   
                    }
                }
            }   
        printf(" ");
    }        
}        
                    
void consonent(char str[],int s)
{
    int i,j,c=1,k,len;
    char temp[300];
    temp[0]=' ';
    for(c=0;c<s;c++)
    {
        temp[c+1]=str[c];
    }
    len=strlen(temp);
    for(i=0;i<len;i++) //i 0 1/- i=6,/- i=11
    {
            if(temp[i]==' ')
            {
                
                i++;              
                if(temp[i]=='a'||temp[i]=='e'||temp[i]=='i'||temp[i]=='o'||temp[i]=='u'||
                   temp[i]=='A'||temp[i]=='E'||temp[i]=='I'||temp[i]=='O'||temp[i]=='U')
                {   
                    //i=1
                    for (j = i; j < len; j++) // j=1 /- 1 2 3 4 5 /- 7
                    {
                        
                        if(temp[j]!=' ')
                        {   
                        
                        } //j=6
                        else
                        {                                   
                            i=j-1;  // j = 5                // 1 2 3 4 5  6  7 8  9  10  11 12  13  14  15
                            break;  //printf("%c",temp[j]); // A X I O M     T E  C  H       G  U    R   U
                        }    // j = 1 2 3 4 5 6     

                    }
                }else
                    for (k = i; k < len; k++) // j=1 /- 1 2 3 4 5 /- 7
                    {
                        
                        if(temp[k]!=' ')
                        {                           // 1 2 3 4 5  6  7 8  9  10  11 12  13  14  15
                            printf("%c",temp[k]);   // A X I O M     T E  C  H       G  U    R   U
                        } //k=11
                        else
                        {                                   
                            i=k-1;  // k = 11   
                            break;   
                        }         

                    }
            }   
        printf(" ");
    }        
}        
