#include<stdio.h>
#include<conio.h>
void main()
{
char name[20];
int s1,s2,s3,s4,s5,total,roll;
float percentage;
printf("enter student name:");
scanf("%s",&name);
printf("enter student roll number:");
scanf("%d",&roll);
printf("enter sub1\t sub2\t sub3\t sub4\t sub5 marks");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
total=s1+s2+s3+s4+s5;
printf("total%d",total);
percentage=total/5;
printf("\tmarksheet");
printf("student name :%s,\troll number:%d",name,roll);
printf("percentage %.2f",percentage);
}