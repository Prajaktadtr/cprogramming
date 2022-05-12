/*4. Read a no and radix of a no to find power 
	base -2
	radix -5	
		power(2,5) 

	power - 32*/
#include<stdio.h>
#include<conio.h>

int radi(int,int);

void main()
{
  int n,m;
    printf("enter base of ");
    scanf("%d",&m);
    printf("enter radix");
    scanf("%d",&n);  
    radi(n,m);
}

int radi(int n,int m)
{
int val=1,i;
for(i=0;i<n;i++)
    {
        val=val*m;
    }
    printf("the value of %d to the power %d is %d",m,n,val);
    return val;
}