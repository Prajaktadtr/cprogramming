/*4. Print all even nos in the range 0- 100 and print summation
	2
	4
	--
	2550*/
    #include<stdio.h>
    #include<conio.h>
    void even(int);
    void sum1(int);

    void main()
    {
        int n;

        printf("Print all even numbers till: ");
    scanf("%d", &n);
    printf("even no between 0 and %d\n",n);
    even(n);

    }
    void even(int n)
    {
        int sum=0;
        int i;
        for(i=2;i<=n;i=i+2)
        {
            printf("%d\n",i);
             sum=sum+i;
        }
        printf("summation %d\n",sum);
        sum1(n);
    }

    void sum1(int n)
    {
        printf("even no is that which is divisible by 2");

    }