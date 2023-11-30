#include<stdio.h>
int main()
{
     int a=1,b,n;
	 printf("enter the valu:");
	 scanf("%d",&n);
	 while(a<=2*n)
	 {
		 if(a%2==0)
	     b=1;
	     while(b<=n)
	   {
		 printf("%d \t",a);
	     b++;
	   }
	     printf("\n");
		 a++;
	 }
	 return 0;
	 }
