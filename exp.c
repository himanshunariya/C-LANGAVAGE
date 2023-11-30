#include <stdio.h>
  
int main()
{
        int a,b,c,d=5;
     for (a=0;a<d;a++)
	 {
        for (b=0;b<2*(d-a)-1;b++) 
		{
			printf(" ");
		}   
       for (c=0;c<2*a+1;c++)
		{
			if (c==0||c== 2*a|| a==d-1)
			{
				printf("* ");
			}
            else
			{
				printf("  ");
			}
		}
		printf("\n");
    }
      return 0;
}