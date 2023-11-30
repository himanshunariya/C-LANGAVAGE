#include<stdio.h>
int main()
{
    int a,b,n;
	printf("enter the valu");
	scanf("%d",&n);
	a=n;
	do{
	    b=a;
		do{
		     printf("%d\t",b);
			 b++;
	    }while(b<=n);
	 printf("\n");
	 a--;
	}while(a>=1);
	return 0;
}
	  
	  
//5
//4 5
//3 4 5
//2 3 4 5
//1 2 3 4 5