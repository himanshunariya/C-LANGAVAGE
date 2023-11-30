#include<stdio.h>
int main()
{
    int a,b,n,c;
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
	      for(b=a;b<=n;b++)
		  {
			  printf(" ");
		  }
		  for(c=1;c<=a;c++)
		  {
		      printf("*");
		  }
	      for(b=1;b<=a-1;b++)
		  {
			  printf("*");
		  }
	          printf("\n");
	}
	      for(a=n-1;a>=1;a--)
    {
		  for(b=a;b<=n;b++)
		  {
			  printf(" ");
		  }
	      for(c=1;c<=a;c++)
		  {
			  printf("*");
		  }
	      for(b=1;b<=a-1;b++)
		  {
			  printf("*");
		  } 
	  printf("\n");
	}
	return 0;
}



//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *