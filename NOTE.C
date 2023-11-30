#include<stdio.h>
int note()
{ 
   int amt,total,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
   printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
   printf("ENTER THE AMOUNT $ :"); 
   scanf("%d",&amt);
   printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
   if(amt>=500)
   {
       a   =amt/500;
       amt =amt%500;
   }
   if(amt>=100)
   {
      b   =amt/100;
      amt =amt%100;
   }
   if(amt>=50)
   {
      c   =amt/50;
      amt =amt%50;
   }
   if(amt>=20)
   {
      d   =amt/20;
      amt =amt%20;
   }
   if(amt>=10)
   {
      e   =amt/10;
      amt =amt%10;
   }
   if(amt>=5)
   {
      f   =amt/5;
      amt =amt%5;
   }
   if(amt>=2) 
   {
      g   =amt/2;
      amt =amt%2;
   }
   if(amt>=1)
   {
      h   =amt/1;
      amt =amt%1; 
   }
   printf("THERE ARE NOTES OF 500$ IS %d\n",a);
   printf("THERE ARE NOTES OF 100$ IS %d\n",b);
   printf("THERE ARE NOTES OF 050$ IS %d\n",c);
   printf("THERE ARE NOTES OF 020$ IS %d\n",d);
   printf("THERE ARE NOTES OF 010$ IS %d\n",e);
   printf("THERE ARE NOTES OF 005$ IS %d\n",f);
   printf("THERE ARE NOTES OF 002$ IS %d\n",g);
   printf("THERE ARE NOTES OF 001$ IS %d\n",h);
}     
int main()
{
	note();
}


