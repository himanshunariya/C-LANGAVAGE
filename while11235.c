#include<stdio.h>
int main()
{
     int i=1,a=0,b=1,c=0,n;
	 printf("enter the valu:-");
	 scanf("%d\n",&n);
	 while (a<=n)
	 {  
        c=a+b;
		printf("%d\n",c);
		b=a;
		a=c;
		i++;
     }
	
return 0; 
}
	

