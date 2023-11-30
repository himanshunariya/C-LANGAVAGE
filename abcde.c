#include<stdio.h>
int main()
{
    int a[100],b,c=0,n;
    scanf("%d",&n);
	for(b=1;b<=n;b++)
	{
	    printf("enter value");
		scanf("%d",&a[b]);
		//c+=a[b];
	}
	for(b=n;b>0;b--)
	{
		printf("%d \t",a[b]);
	}
		//printf("\n%d",c);
	return 0;
}
	