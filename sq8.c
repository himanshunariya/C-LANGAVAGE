#include<stdio.h>
int main()
{
     int a,b,n;
	 printf("enter");
	 scanf("%d",&n);
	 for (a=1;a<=n;a+=0)
	 { 
	     for (b=1;b<=5;b++)
		 printf("%d \t",a++);
	     printf("\n");
	 }
	 return 0;
}