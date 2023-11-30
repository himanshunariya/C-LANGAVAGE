#include <stdio.h> 
int main()
{
    int a,b,n,c=65;
    for(a=1;a<=5;a++)
    {
        for(b=a;b>=1;b--)
        {
            printf("%c \t",c+b-1);
        }
        printf("\n");
    }
    return 0;
}
//output
 //A
 //BA
 //CBA
 //DCBA
 //EDCBA 
