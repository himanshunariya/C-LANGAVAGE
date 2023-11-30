#include<stdio.h>
int main()
{
    int a=1,b,n,c;
	printf("enter the valu:-");
	scanf("%d",&n);
	do{
	    b=a;
	    do{
			   printf(" ");
			   b++;
		}while(b<=n);
		c=1;
		do{
			   printf(" *");
			   c++;
		}while(c<=a);
	  printf("\n");
	  a++;
	}while(a<=n);
	a=n-1;
	do{
	    b=a;
		do{
			   printf(" ");
			   b++;
		}while(b<=n);
		c=1;
	    do{
			   printf(" *");
			   c++;
		}while(c<=a);
	  printf("\n");
	  a--;
	}while(a>=1);
	return 0;
}



//    *
//   * *
//  * * *
// * * * *
//* * * * *
// * * * *
//  * * *
//   * *
//    *