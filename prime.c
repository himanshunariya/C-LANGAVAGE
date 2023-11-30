#include <stdio.h>

int main() {
    int a,b,c=1;

    printf("Enter a value number\n");
    scanf("%d",&a);

             for (b=2;b<a;b++)
	{
             if (a%b==0)
	{
             c=0;
    }
    }

             if (c)
	{
    printf("%d is a Prime Number\n",a);
    }
	         else
	{
    printf("%d is not a Prime Number\n",a);
	}
     return 0;
}