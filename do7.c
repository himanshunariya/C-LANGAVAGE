#include<stdio.h>
int main()
{
      int a=1,b,c=65,n;
	 printf("enter the valu");
	 scanf("%d",&n);
	    do{
		     b=1;
	    do{
			if(a%2==1)
			{		
	        printf("%c\t",c);
		  }
		  else
		  {
		        printf("%c \t",c+32);
	      }
	         c++;
			 b++;
		}
		  while(b<=a);
		  printf("\n");
		  a++;
		}while(a<=n);
  return 0;
}
 