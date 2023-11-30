#include<stdio.h>
int main()
{
    int a[100][100],c=0,i,j,n;
    printf("enter matrix size : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
   	{
        
		for(j=0;j<n;j++)
        
		{
		
		    printf("enter element :");
            scanf("%d",&a[i][j]);
        
		}
    }		   
	 
	
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		
		{
			
			if(i>=j)
			{
			
		        c+=a[i][j];
			
			}
		}
	}
	 
	printf(" sum of lower triangle : %d ",c);
    
	return 0;

}