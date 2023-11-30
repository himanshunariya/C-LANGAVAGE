#include <stdio.h>  
int main()  
{  
    int a,b,c,n,d=1; 	
	printf("enter the valu ");
    scanf("%d",&n);  
    a=n;
	do{  
        b=0;
		do{
			  printf(" ");
			  b++;
	    }while(b<=a-1);
        c=1;
		do{
			  printf("*");
			  c++;
		}while(c<=d);
      printf("\n");
      d++;
      a--;		
    }while(a>=1);
    return 0;  
}

//        *
//      * *
//    * * *
//  * * * *
//* * * * *
