#include<stdio.h>
int oneton()
{
   int a,n,b=0;
	 scanf("%d",&n);
	 for (a=1;a<=n;a++)
	 {
	
	 if (a%2==1)
		  b=b+a;
	 }
	 printf("%d \n",b);
	 
}
int main()
{
     oneton();
	 return 0;
	 }