#include <stdio.h>
int reverseNo(int num) 
{
    int reversed=0;
    while (num>0)
	{
        reversed=reversed*10+num%10;
        num/=10;
    }
    return reversed;
}
int main() 
{
    int x;
	printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	printf("ENTER THE VALUE :");  
	scanf("%d",&x);
    int reversed=reverseNo(x);
	printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("REVERSED NUMBER: %d\n", reversed);
	printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    return 0;

