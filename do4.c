#include<stdio.h>
int main()
{
      int a=1,b,c=1,n;
	  printf("enter the valu");
	  scanf("%d",&n);
	    do{
		     b=1;
	    do{
	        printf("%d\t",c++);
		    b++;
		  }
		      while(b<=a);
		        printf("\n");
		        a++;
	      }
	         while(a<=n);
  return 0;
}
 