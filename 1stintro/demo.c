#include<stdio.h>
#include<conio.h>
void main()
{
    float Cir,Are,Rad,Dia;
    printf("Enter The value : ");
    scanf("%f",&Rad);
    Dia=2*Rad;
    printf("\ndiameter of circle : %f",Dia);
    Cir=2*3.14*Rad;
    printf("\ncircumference of circle = %.2f",Cir);
    Are=3.14*Rad*Rad;
    printf("\narea of circle = %f",Are);
    getch();
}
