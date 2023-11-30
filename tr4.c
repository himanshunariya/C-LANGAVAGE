#include<stdio.h>
int main()
{
     int a,b,n;
	 printf("enter");
	 scanf("%d",&n);
	 for (a=65;a<=n;a++)
	 { 
	     for (b=65;b<=a;b++)
	 {
		 printf("%c \t",b);
	 }
	     printf("\n");
	 }
	 return 0;
}