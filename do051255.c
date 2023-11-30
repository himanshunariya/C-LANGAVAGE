#include<stdio.h>
int main()
{
    float a=0.5,c;
	printf("enter the valu "); 
	int i=1,n;
	scanf("%d",&n);
	printf("%.1f\n",a);
    do{
	  if(i%2==1)
	    {
          c=a+0.5*i;    
	      printf("%.1f\t",c);
	      a=c;
		}
      i++;
    }while(i<=2*(n-1));
	return 0;
}
	  