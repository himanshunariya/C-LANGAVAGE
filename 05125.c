#include<stdio.h>
int main()
{
	 
     float a=0.5,c;
     int i,n;	 
	 scanf("%d",&n);
	 printf("%.1f\n",a);
	 for (i=1;i<=2*(n-1);i++)
	 if (i%2==1)
	{   
	     c=a+0.5*i;
		 printf("%.1f\n",c);
		 a=c;
	}
	     
	
	 return 0;
	}
	
	 