/*4. Read a no and radix of a no to find power 
	base -2
	radix -5	
		power(2,5) 

	power - 32*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int n,m,val=1,i;
    printf("enter base of ");
    scanf("%d",&m);
    printf("enter radix");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        val=val*m;
    }
    printf("the value of %d to the power %d is %d",m,n,val);
}

