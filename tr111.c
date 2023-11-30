#include <stdio.h>  
int main()  
 {  
       int a,b,c;  
            for (a=0;b<c;a++) 
  {  
            (0)(a) = 1;  
 }     
            for (a=1;a<c;a++)
  {  
            for (b=0;b<=a;b++) 
  {  
            if (b==0||b==a) 
  {  
               (a)(b)=1; 
 }      else 
  {  
               (a)(b)=(a-1)(b-1)+(a-1)(b);  
 } 
 }  
 }  
                 printf("%d \n", c);  
            for (a=0;a<c;a++) 
  {  
            for (b=0;b<c-a-1;b++) 
  {  
                 printf("  ");  
 }  
            for (b=0;b<=a;b++) 
  {  
                 printf("%4d",(a)(b));  
 }  
                 printf("\n");  
 }  
    return 0;  
} 
                     
//        		   1
//		    	  1 1
//               1 2 1
//			    1 3 3 1
//			   1 4 6 4 1