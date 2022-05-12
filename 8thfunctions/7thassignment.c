/*User defined functions for the following 2. Read a no to find their digital sum 
	i.p- 1234
	o.p - 10*/
    #include<stdio.h>
    #include<conio.h>

    int sum(int);

    void main()
    {
        int n;
        printf("enter number:");
        scanf("%d",&n);
        sum(n);
    //    printf("sum of no is %d",sum(n));

    }

    int sum(int n) //body of function
    {
        int  r,dsum=0;
	//printf("Enter a No :");
	//scanf("%d",&n);
	// Logic to find digital sum 
	while(n>0)
	{
        r=(n%10);
		dsum+=r;
		n/=10;
	}
	printf("Digital Sum :%d\n",dsum);
    //  printf("sum of no is %d",sum(n));
    return 0;

    }