#include<stdio.h>
int main()
{
     int i,a,b,c=11;
	 printf("enter");
	 scanf("%d",&i);
	 for (a=1;a<=i;a++)
	 { 
	     for (b=1;b<=5;b++)
		 printf("%d \t",c++);
	     printf("\n");
		 c+=5;
	 }
	 return 0;
}