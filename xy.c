#include<stdio.h>
int main()
{
      int x,y;
	  
	  printf("enter tha x");
	  scanf("%d",&x);
	  
	  printf("enter tha y");
	  scanf("%d",&y);
	  
	  if((x<0) && (y<0))
	  {
	   printf("%d%d lies in  first quadrant",x,y);
	  }
	   else if ((x<0) && (y>0))
	  {
	  printf("%d%d lies in  first quadrant",x,y);
	  }
	   else if ((x>0) && (y<0))
	  {
	   printf("%d%d lies in  first quadrant",x,y);
	  }
	  else 
	  {
	  printf("%d%d lies in  first quadrant",x,y);
	  }
	  
	   return 0;
	  }
	  