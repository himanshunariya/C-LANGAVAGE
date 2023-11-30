#include <stdio.h>  
int main()  
{  
    int a,b,c,n,d;
    printf("enter the valu ");    
    scanf("%d",&n);
    d=n;
    c=n;	
    a=d;
	do{  
        b=0;
		do{
			   printf(" ");
			   b++;
		}while(b<=n-c);
	    b=1;
		do{
			   printf("*");
			   b++;
	    }while(b<=a);
	  c--;
      printf("\n");
	  a--;
    }while(a>=1);   
    return 0;  
}

//*****
// **** 
//  *** 
//   **
//    *