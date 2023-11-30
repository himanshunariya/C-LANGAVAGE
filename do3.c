#include<stdio.h>
int main()
{
      int a,b,n;
	  printf("enter the valu");
	  scanf("%d",&n);
	  a=n;
	    do{
		     b=n;
	    do{
	        printf("%d\t",a);
		    b--;
		  }
		      while(b>=a);
		        printf("\n");
		        a--;
	      }
	         while(a>=1);
  return 0;
}
 