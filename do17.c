#include<stdio.h>
int main()
{
    int a=1,b,c,n,d;
	printf("enter the valu "); 
	scanf("%d",&n);
	d=n;
	do{
		b=0;
	    do{
			printf(" ");
			b++;
		}while(b<=a-1);
		c=d;
		do{
			printf(" *");
			c--;
		}while(c>=1);
	printf("\n");
	d--;
	a++;
	}while(a<=n);
	return 0;
}



//* * * * *
// * * * *
//  * * *
//   * *
//    *