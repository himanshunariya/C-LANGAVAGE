#include<stdio.h>
int main()
{
    int i = 1;

    for(i=1;i<=10;i++)
   /* {
        printf("%d\n",i);

      //  if(i==10)
     //   if(i==5 || i==4)
     
        {
            break;
        } 
    }
    */
     {
      //  if(i==10)
          if(i==5 || i==4)
        {
            continue;
        }
            printf("%d\n",i);    
    }
    return 0;
}