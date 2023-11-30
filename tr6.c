#include<stdio.h>
int main()
{
     int a,b,n,c=1;
	 printf("enter");
	 scanf("%d",&n);
	 for (a=1;a<=n;a++)
	 { 
	     for (b=1;b<=a;b++)
	 {
		 printf("%d \t",c++);
	 }
	     printf("\n");
	 }
	 return 0;
}