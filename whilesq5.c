#include<stdio.h>
int main()
{
     int a=65,b,n;
	 printf("enter the valu:");
	 scanf("%d",&n);
	 while(a<=n)
	 {
	   b=65;
	     while(b<=n)
	   {
		 printf("%c \t",a);
	     b++;
	   }
	     printf("\n");
		 a++;
	 }
	 return 0;
	 }
// enter the valu is abov 65.