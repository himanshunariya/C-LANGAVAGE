#include<stdio.h>
int main()
{
     int a,b,n,c=65;
	 scanf("%d",&n);
	 for (a=1;a<=n;a++)
	 { 
	     for (b=1;b<=a;b++)
	 {
		 printf("%c \t",c++);
	 }
	     printf("\n");
	 }
	 return 0;
}