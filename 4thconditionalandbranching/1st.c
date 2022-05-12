#include<stdio.h>
#include<conio.h>

int main()
{
    char nm[20];
    int a;
    printf("enter person name");
    scanf("%s",&nm);
    printf("enter persons age");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("person is eligible for voting");
        
    }
    else{
        printf("person is not eligible for voting");
    }
}

