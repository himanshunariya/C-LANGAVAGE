#include<stdio.h>
int main ()
{
   int x,y;
   
   printf("enter a number of x:"); 
   scanf("%d",&x);   
   
   printf("enter a number of y:");
   scanf("%d",&y);
   
   if((x<=y) && (y<=x))
     {
	   printf("%d ");
     }	 
 return 0; 
}
