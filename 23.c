#include<stdio.h>
int main()
{
         int a,b,c,n,d;
	     printf("enter");
	     scanf("%d",&n);
		 d=n;
	     for (a=1;a<=n;a++)
	     { 
	     for (b=1;b<=d-1;b++)
	     {
		 printf(" ");
	     }
	     for (c=1;c<=a;c++)
		 {
		  printf(" ");		  
		 }
		 for (b=1;b<=a-1;b++)
		 {
			 printf("*");
		 }
	      printf("\n");
	      d--;
	     }
	 return 0;
}
//         * 
//       *   *
  //    *     *
  //   *       *
  //  *         *  
  // *           *      
 // *             *      
 //* * * * * * * * *

			 
	
	 