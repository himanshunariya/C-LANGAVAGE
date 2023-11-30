#include<stdio.h>
int odd()
{
  int a;
	 for (a=1;a<=50;a++)
	 {
		 if (a%2==1)
	 printf("%d \n",a);
	 }
}
int main()
{
     odd();
	 return 0;
	 }