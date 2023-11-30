#include<stdio.h>
int main()
{
     int a=1,b=0,n;
	 printf("enter the valu:-");
	 scanf("%d",&n);
	 while (a<=n)
	 {
           if(a%2==0)
		  {
		     b=a*a;
		  }
		  else
		  {
		  b=a;
		  }
		  printf("%d\n",b);
		  a++;
     }
	
return 0; 
}
	
