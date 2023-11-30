#include<stdio.h>
int main()
{
    int a=2,c=0,n;
	printf("enter the valu ");
	scanf("%d",&n);
	do{
		if(n%a==0)
	    {
			c=1;
		}
	   a++;
    }while(a<n);
     if(c==0)
	{
		printf("%d is prime",n);
	}
     else
	{
		printf("%d is not prime",n);
	}
	 return 0;
}
	 