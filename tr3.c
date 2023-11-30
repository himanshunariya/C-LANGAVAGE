#include<stdio.h>
int main()
{
     int a,b,n;
	 printf("enter");
	 scanf("%d",&n);
	 for (a=n;a>=1;a--)
	 { 
	     for (b=n;b>=a;b--)
	 {
		 printf("%d \t",a);
	 }
	     printf("\n");
	 }
	 return 0;
}