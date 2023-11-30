#include<stdio.h>
int main()
{
    int a,b,n;
	printf("enter the valu ");
	scanf("%d",&n);
	a=n;
	do{
		b=a;
		do{
			 printf("*");
			 b--;
	    }while(b>=1);
	  printf("\n");
	  a--;
	}while(a>=1);
	return 0;
}	  


//* * * * *
//* * * *
//* * *
//* *
//*