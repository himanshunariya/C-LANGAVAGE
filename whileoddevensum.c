#include<stdio.h>
int main()
{
     int a=1,b=0,n;
	 printf("enter the valu:-");
	 scanf("%d",&n);
	 while (a<=n)
	 {
	   if (a%2==1)
		 {
          b+=a;
		 }
		 a++;
	 }
	 printf("%d",b);
return 0; 
}
	
