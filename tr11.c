#include<stdio.h>
int main()
{
     int a,b,c=1;
	     for (a=1;a<=5;a++)
	 { 
	     for (b=1;b<=a;b++)
	 {
		 printf("%d \t",c);
		 if(c==1)
		 {
			 c=0;
		 }else{
			 c=1;
		 }
	 }
	     printf("\n");
	 }
	 return 0;
}
//output
//1
//01
//010
//1010
//10101