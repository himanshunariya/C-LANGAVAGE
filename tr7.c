#include<stdio.h>
int main()
{
     int a,b,n,c=65;
	 //scanf("%d",&n);
	 for (a=1;a<=5;a++)
 {
	 for (b=1;b<=a;b++)
 {
     if(a%2==1)
 {	 
     printf("%c\t",c);
 }
     else
 {
     printf("%c \t",c+32);
 } 
	 c++;
 }
	 printf("\n");
 }	 
	 return 0;
 }