#include <stdio.h>
int main()
 {
    int a,b,c=1;

    printf("Enter a pactroyal number\n");
    scanf("%d",&a);

             for (b=a;b>=1;b--)
			 {
               c=c*b;				    
		    }
     printf("%d is pactroyal number",c);
     return 0;
}

