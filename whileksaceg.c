#include<stdio.h>
int main()
{
     int a=1,b=65,c=97;
	 while (a<=13)
	 {  
            if(a%2==1)
		 {
		    printf("%c\t",b);
			b+=2;
			c+=2;
			
		 }
		 else
		 {
			printf("%c\t",c);
			c+=2;
			b+=2;
			
		 }
		 a++;
	 }
return 0; 
}
	

