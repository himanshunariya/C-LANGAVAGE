#include<stdio.h>
int main()
{
     int a=1,b,n;
	 printf("enter");
	 scanf("%d",&n);
	 while(a<=n)
	 { 
         b=1;
	     while(b<=a)
	 {
		 printf("%d \t",b);
		 b++;
	 }
	     printf("\n");
		 a++;
	 }
	 return 0;
}