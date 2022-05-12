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
    radi(m,n);
    printf("the value of %d to the power %d is %d",m,n,radi);
}

int radi(int m,int n)
{
int val=1,i;
// for(i=0;i<n;i++)
//     {
//         val=val*m;
//     }
//     printf("the value of %d to the power %d is %d",m,n,val);
//     return val;
if(i>=0)
{
    val=val*radi(m,n);
    radi(m,--n);


// printf("the value of %d to the power %d is %d",m,n,val);
// radi(m,--n);
}
else{
 return val;
}
}