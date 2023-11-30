#include<stdio.h>
int main()
{
    int a,b,n;
	printf("enter the valu ");
	scanf("%d",&n);
	a=1;
	do{
		b=1;
		do{
			 printf("*");
			 b++;
	    }while(b<=a);
	  printf("\n");
	  a++;
	}while(a<=n);
	return 0;
}	  

//*
//* *
//* * *
//* * * *
//* * * * *