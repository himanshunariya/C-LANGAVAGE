#include<stdio.h>
int main()
{
    int a = 10;
    int*ptr;
    ptr = &a;
    int**p;

    printf("value of a = %d\n",a);
    printf("address of a = %p\n",&a);
    printf("pointer of is : %p\n",p);

    return 0;
}
