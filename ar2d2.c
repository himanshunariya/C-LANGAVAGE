#include<stdio.h>
int main()
{
    int a[100][100],i,j,m,n;
	scanf("%d%d",&n,&m);
	  for(i=0;i<n;i++)
	{
	     for(j=0;j<m;j++)
     {
	          scanf("%d",&a[i][j]);
	 }
	     printf("\n");
	}
	      printf("\n***---***\n\n");
	  for(i=0;i<n;i++)
	{
	     for(j=0;j<m;j++)
     {
		 
	          printf("%d",a[i][j]);
	 }
	     printf("\n");
	}
	   
	   return 0;
}
	