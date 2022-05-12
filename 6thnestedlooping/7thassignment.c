
/*7)
 
                          *
                     *   *   *
                *   *   *   *   *
           *   *   *   *   *   *   *
      *   *   *   *   *   *   *   *   *      */
     #include<stdio.h>
     #include<conio.h>
     void main()
     {
         int r,c,space;
         for(r=1;r<=5;r++)
         {
             for(space=1;space<=5-r;space++)
             {
                 printf(" ");
             }
             for(c=1;c<=2*r-1;c++)
             {
                 printf("*");

             }
             printf("\n");
         }
     }
