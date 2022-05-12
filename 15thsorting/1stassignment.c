/*develop a two d array to store name age
sort them as per assending name
if more than two elements having same name,then sort as per their age
 prajakta 24
 prajakta 25
 likewise irrespective of their actual position in array */
 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 #define max 100

 void main()
 {
    char name[max][max],swap[max];
    int age[max],i,j,temp,size;

    printf("enter the no of person\n");
    scanf("%d",&size);
    printf("\nenter %d persons name\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%s",&name[i]);
    }
    printf("\nenter age of %d person\n",size);
    printf("\nsr.no.\tname\tage\n");

    for(i=0;i<size;i++)
    {
        printf("%d\t%s\t",i+1,name[i]);
        scanf("%d",&age[i]);
    }
    for(i=0;i<(size-1);i++)
    {
        for(j=0;j<(size-i-1);j++)
        {
            if(strcmp(name[j],name[j+1])>0)
            {
                strcpy(swap,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],swap);
                temp=age[j];
                age[j]=age[j+1];
                age[j+1]=temp;
            }
           
        }
    }
    
printf("\n list after bubble sort as per alphabatical name\n");

printf("\nsr. no. \t name\t age");
for(i=0;i<size;i++)
{
    {
    printf("\n%d\t%s\t%d",i+1,name[i],age[i]);
    }
}

for(i=0;i<(size-1);i++)
{
    for(j=0;j<size-i-1;j++)
    {
        if(strcmp(name[j],name[j+1])==0 &&age[j]>age[j+1])
        {
            strcpy(swap,name[j]);
            strcpy(name[j+1],swap);
            strcpy(name[j+1],swap);
            temp=age[j];
            age[j]=age[j+1];
            age[j+1]=temp;
      
        }
    
    }
    
}
printf("\n list after bubble sort if more than 2 elements have same name\n");
printf("\nsr.no\tname\t\tage");
for(i=0;i<size;i++) 
{
    printf("\n%d\t%s\t%d",i+1,name[i],age[i]);
}    
 }
 
