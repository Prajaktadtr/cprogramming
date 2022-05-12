/*User defined functions for the following 5. Print all even nos in the range 0- 100 and print summation
	2
	4
	--
	2550 */
    #include<stdio.h>
    #include<conio.h>

    int sum(int);

void main()
{
    int n;
    printf("enter a no:");
    scanf("%d",&n);
    int sum(int);
    printf(" no are %d",sum(int));

}
int sum(int);
{
  int n,i;
  printf("print all even nos till:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      if(i%2==0)
      {
          printf("%d\n",i);
      }
  } return n; 
}
