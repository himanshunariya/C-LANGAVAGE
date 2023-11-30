#include<stdio.h>
#include<string.h>
int main()
{
	 char a[8]="himanshu";
	 int i,j,len;
	 
	 len=strlen(a);
	 for(i=len;i>=0;i--)
	 //printf("%s",a);
	 {
		 printf("%c",a[i]);
	 }
	 printf ("\n*****************");
	 return 0;
}

	 