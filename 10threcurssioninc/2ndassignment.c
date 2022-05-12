/*2. Read a no to find their digital sum 
	i.p- 1234
	o.p - 10*/
    #include<stdio.h>
    #include<conio.h>

    int sum(int,int);
    
    void main()
    {
        int n,s=0;
        printf("enter number:");
        scanf("%d",&n);
        // sum(n);
      printf("sum of no is %d",sum(n,s));

    }

    int sum(int n,int s)
    {
        int i,k;
    k=n%10;
        i=n/10;
        s=s+k;
        if(i!=0)
        sum(i,s);
        else
        return s;

    }

    