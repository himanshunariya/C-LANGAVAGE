#include<stdio.h>
int main()
{
    int a[100][100],i,j,n;
	printf("enter the value");
	scanf("%d",&n);
	  for(i=0;i<n;i++)
	{
	     for(j=0;j<n;j++)
     {
	          scanf("%d",&a[i][j]);
	 }
	     printf("\n");
	}
	      printf("\n***---***\n\n");
	  for(i=0;i<n;i++)
	{
	     for(j=0;j<n;j++)
     {
		    if(a[i][j]==0)
			{
			  printf(" ");
			 }
			 else
			 {
	          printf("%d ",a[i][j]);
			 }
	 }
	     printf("\n");
	}
	   
	   return 0;
}
	