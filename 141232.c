#include<stdio.h>
int main()
{
      int i,a=0,b=1,c,n;
	  scanf("%d",&n);
	  for (i=1;i<=n;i++)
	{
	  c=i*b;
      printf("%d\n",c);
      b=b*2;
     }
    return 0;
}	