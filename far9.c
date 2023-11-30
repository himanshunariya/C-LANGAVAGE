#include<stdio.h>
int oneforea()
{
   int a,n,b=0;
	 scanf("%d",&n);
	 for (a=1;a<=n;a++)
	 {
	  b=a*a;
	 printf("%d \n",b);
	 }
}
int main()
{
     oneforea();
	 return 0;
	 }