#include<stdio.h>
int main ()
{
    int a[100],b,c=0,d=0,n;
	printf("enter the value");
	scanf("%d",&n);
	
	for(b=0;b<=n;b++)
	{
		
		a[b]=b;
	
	    if(a[b]%2==1)
        {
            c+=a[b];
        }
        else																		
        {
            d+=a[b];
        }
	
	}
	
	printf("odd : %d",c);
	
	printf("\neven : %d ",d);
    
	return 0;
}	