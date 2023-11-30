#include<stdio.h>
int main()
{
    int a,b,n,c=1;
	printf("enter the valu");
	scanf("%d",&n);
	a=1;
	do{
	   b=1;
	   do{
		       printf("%d\t",c);
           if(c==1)
		    {
			    c=0;
		    }
	       else
		    {
			    c=1;
	        }
			b++;
        }while(b<=a);
	 printf("\n");
	 a++;
	}while(a<=n);
	return 0;
}
	  
//1
//0 1
//0 1 0
//1 0 1 0
//1 0 1 0 1