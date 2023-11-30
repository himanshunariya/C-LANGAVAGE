#include<stdio.h>
int main()
{
     int a,n,b=0;
	 scanf("%d",&n);
	 for (a=1;a<=n;a++)
	 if (a%2==0)
	 {
	 printf("%d\t",a*a);
	 }
	 else
	 {
	 printf("%d\t",a);
	 }
	 return 0;
}