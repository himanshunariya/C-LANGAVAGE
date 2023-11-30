#include<stdio.h>
int main()
{
    int a,b,c,n,d;
	printf("ENTER THE TRINGAL VALU : ");
	scanf("%d",&n);
	d=n;
	for(a=1;a<=n;a++)
	{
	    for(b=1;b<=a-1;b++)
		{
			printf(" ");
		}
		for(c=d;c>=1;c--)
		{
			printf("*");
		}
		for(b=1;b<=d-1;b++)
		{
			printf("*");
		}
	        printf("\n");
	        d--;
	}
	return 0;
}



//*********
// *******
//  *****
//   ***
//    *