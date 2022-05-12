#include<stdio.h>
#include<conio.h>

int main()
{
    char nm[20];
    float a;
    printf("enter person name");
    scanf("%s",&nm);
    printf("enter persons percentage");
    scanf("%f",&a);
    printf("\nname of a person %s",nm);
    printf("\npercentage of person is %f",a);
    if(a>=65)
    {
        printf("\nperson is eligible for interview");
        
    }
    else{
        printf("waiting");
    }
}
