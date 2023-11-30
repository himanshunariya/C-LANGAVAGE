#include<stdio.h>
int main ()
{
    int a[100],b,c=0,n;
	printf("enter the value");
    scanf("%d",&n);
	 
	for(b=0;b<n;b++)
	{
     	printf("enter elements - ");
		scanf("%d",&a[b]);   
        c+=a[b];		
	}
	
	printf("sum : %d ",c);
  
    return 0;
}	