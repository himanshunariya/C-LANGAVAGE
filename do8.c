#include<stdio.h>
int main()
{
    int a=1,b,n,c=65;
	printf("enter the valu");
	scanf("%d",&n);
	do{
	    b=1;
		do{
		     printf("%c\t",c++);
			 b++;
	    }while(b<=a);
	 printf("\n");
	 a++;
	}while(a<=n);
	return 0;
}
	  

//A
//B C
//D E F
//G H I J
//K L M N O