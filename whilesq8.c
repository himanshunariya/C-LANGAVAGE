#include<stdio.h>
int main()
{
     int i,a=1,b,c=11;
	 printf("enter the valu:");
	 scanf("%d",&i);
	 while(a<=i)
	 {
	     b=1;
	     while(b<=5)
	   {
		 printf("%d \t",c++);
	     b++;
	   }
	     printf("\n");
		 c+=5;
		 a++;
	 }
	 return 0;
	 }
