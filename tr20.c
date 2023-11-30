#include<stdio.h>
int main()
{
    int a,b,n,d;
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
	    for(b=1;b<=a;b++)
		{
			printf("*");
		}
	        printf("\n");}
	    for(a=n;a>=1;a--)
	{
		for(b=1;b<=a-1;b++)
		{
			printf("*");
		}
	        printf("\n");
	}
	return 0;
}



//*
//**
//***
//****
//*****
//****
//***
//**
//*