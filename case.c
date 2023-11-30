#include<stdio.h>
int main()
{
    char var;
    printf("************************************\n");
    printf("ENTER THE WEEK DAY IN NUMBER:");
    scanf("%c",&var);
    printf("************************************\n");
    switch (var)
    {
    case'0':
          printf("7.SUNDAY IS THE SEVEN DAY OF THE WEEK\n");
          printf("************************************\n");
          break;
    case'1': 
          printf("1.MONDAY IS THE FIRST DAY OF THE WEEK\n");
          printf("************************************\n");
          break;
    case'2':
          printf("2.TUSDAY IS THE SECOND DAY OF THE WEEK\n");
          printf("************************************\n"); 
          break;
    case'3':
          printf("3.WEMSDAY IS THE THIRD DAY OF THE WEEK\n");
          printf("************************************\n");  
          break;
    case'4':
          printf("4.THURSDAY IS THE FOURTH DAY OF THE WEEK\n"); 
          printf("************************************\n");   
          break;
    case'5':  
          printf("5.FRIDAY IS THE FIFTH DAY OF THE WEEK\n"); 
          printf("************************************\n"); 
          break;
    case'6':
          printf("6.SATURDAY IS THE SIXTH DAY OF THE WEEK\n");
          printf("************************************\n");   
          break;
    default: 
            printf("WRONG NUMBER....");
             printf("\n************************************\n"); 
             break;

    }
    return 0;
}