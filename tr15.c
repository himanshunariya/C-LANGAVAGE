#include<stdio.h>
int main()
{
     int a,b,c,n,d=1;
	 scanf("%d",&n);
	 for(a=n;a>=1;a--)
	 {
		 for (b=1;b<=a-1;b++)
		 {
		  printf(" \t"); 
		 }
	     for (c=1;c<=d;c++)
		 {
		  printf("* \t"); 
		 }
	      printf("\n");
	      d++;
	 }
	 return 0;
}

 //                               *
//                        *       *
//                *       *       *
 //       *       *       *       *
//*       *       *       *       *

			 
	
	 