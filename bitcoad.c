#include<stdio.h>
int main()
{
    int a = 5;
    int b = 4;

   printf("1. bitwise and of a & b is  (and)   : = %d\n", a & b);
   printf("2. bitwise and of a & b is  (or)    : = %d\n", a|b);
   printf("3. bitwise and of a & b is  (cap)   : = %d\n", a^b);
   printf("4. bitwise and of a & b is  (till)  : = %d\n",~a);
   printf("5. bitwise and of a & b is  (till)  : = %d\n",~b);
   printf("6. bitwise and of a & b is  (shift) : = %d\n",a>>2);
   printf("7. bitwise and of a & b is  (shift) : = %d\n",a<<2);


   return 0;
} 
 