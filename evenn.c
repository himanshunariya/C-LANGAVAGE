#include<stdio.h>
int main()
{
     int a,n,b=0;
	 scanf("%d",&n);
	 for (a=1;a<=n;a++)
	 {
	
	 if (a%2==0)
		  b=b+a;
	 }
	 printf("%d \n",b);
	 
	 return 0;
	 }