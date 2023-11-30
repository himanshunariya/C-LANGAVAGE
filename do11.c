#include<stdio.h>
int main()
{
    int a,b,n,c=65;
	a=1;
	do{
	    b=a;
	    do{
		     printf("%c\t",c+b-1);
		     b--;
	    }while(b>=1);
	 printf("\n");
	 a++;
	}while(a<=5);
	return 0;
}
	  
//A
//B A
//C B A
//D C B A
//E D C B A