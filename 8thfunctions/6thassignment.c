/*User defined functions for the following 1. read a no and find 10 multiples of it .
	read a no -5 
	5 ,10,15....50*/
    #include<stdio.h>
    #include<conio.h>
    void mult(int);

    void main()
    {
        int n;
        printf("enter no:");
        scanf("%d",&n);
        mult(n);
        // printf("multiple of no is %d",n);
    }

    void mult(int n)
    {
        int i=1;
	//printf("Enter a no :");
	//scanf("%d",&n);
	// Loop to print 10 mutliples 
	for(i=1;i<=10;i++)
		printf("%d x %d=%d\n",n,i,(n*i));


    }