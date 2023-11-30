#include<stdio.h>
int main()
{
    int i=1,a=0,b=1,c,n;
    printf("enter the valu "); 
	scanf("%d",&n);
	do{
	     c=i*b;
	     printf("%d\t",c);
	     b=b*2;
	     i++;
    }while(i<=n);
    return 0;
}	