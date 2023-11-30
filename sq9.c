#include<stdio.h>
int main()
{
     int i,a,b,c=65;
	 printf("enter");
	 scanf("%d",&i);
	 for (a=1;a<=i;a++)
	 { 
	     for (b=1;b<=5;b++)
		 printf("%c \t",c++);
	     printf("\n");
	 }
	 return 0;
}