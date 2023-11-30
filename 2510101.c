#include <stdio.h>

int isPerfectNumber(int num) 
{
    int sum = 1;
    for (int i=2;i<=num/2;i++)
    {
        if (num%i==0)
		{  
            sum+=i;
        }
    }
    return (sum==num);
}
int main() 
{
    int num ;
	printf("ENTER THE VALUE :");
	scanf("%d",&num);
    if (isPerfectNumber(num)) 
{
        printf("%d IS A PERFECT NUMBER.\n", num);
    }              
	else
	{
        printf("%d IS NOT A PERFECT NUMBER.\n", num);
}
    return 0;
}
