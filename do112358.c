#include<stdio.h>
int main()
{
    int i=1,a=0,b=1,c=0,n;
	printf("enter the valu "); 
    scanf("%d",&n);
    do{
         c=a+b;
         printf("%d\t",c);
         b=a;
         a=c;
	     i++;
    }while(i<=n);
    return 0;
}