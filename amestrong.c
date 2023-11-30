#include <stdio.h>
#include <math.h>
int main() {
   int a,b,c,n=0;
   float d=0;
   
   printf("Enter a value: ");
   scanf("%d", &a);
       b=a; 
   for (b=a;b!=0;++n) {
       b/= 10;
   }
   for (b=a;b!=0;b/= 10) {
       c=b%10; 
       d+=pow(c,n);
   }
   if (d==a)
    printf("%d is Armstrong number.",a);
   else
    printf("%d is not an Armstrong number.",a);
   return 0;
}