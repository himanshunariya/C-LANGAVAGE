#include<stdio.h> 
#include<string.h>
int main()
{
	 char f[10],l[10];
	 
	 scanf("%s",&f);
	 scanf("%s",&l);
	 
	 printf("******************");
	 
//	 printf("\n%s %s",f,l);
	 printf("\n %s and  %s ",f,l);
	 
	 printf("size of first name = %d",strlen(f));
	 printf("\n         size of first name = %d",strlen(l));
	 return 0;
}
