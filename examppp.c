#include<stdio.h>
 
 int main()
 {  
    int nynum = 10;
    int*ptr;
    ptr = &nynum;
    int**p;

    printf("valu of mynum = %d\n",nynum);
    printf("address of mynum is = %p\n",&nynum);
    printf("pointer of ptr is = %p\n",ptr);
    printf("address of ptr is = %p\n",ptr);
 
    return 0;   
 }