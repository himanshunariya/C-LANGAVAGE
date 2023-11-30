 #include <stdio.h>
int main()
{

	
  int d,c,e[100][100],f[100][100],sum[100][100],a,b;
  
  printf("Enter the number :");
  scanf ("%d",&d);
  
  printf("Enter the number : ");
  scanf ("%d",&c);
  
   printf("+*+*+*+*+*+*+*+*+*+*+");
 
  printf("\nEnter a 1st matrix:\n");
  for (a=0;a<d;++a)
    for (b=0;b<c;++b) 
	{
      printf("Enter  a %d%d: ", a+1,b+1);
      scanf ("%d",&e[a][b]);
    }

  printf("Enter a  2nd matrix:\n");
  for (a=0;a<d;++a)
    for (b=0;b<c;++b) 
	{
      printf("Enter b %d%d: ", a+1,b+1);
      scanf("%d",&f[a][b]);
    }

  printf("\nSum of two matrices: \n");
  for (a=0;a<d;++a)
  for (b=0;b<c;++b) 
	{    
sum[a][b]=e[a][b]-f[a][b];
      printf("%d   ", sum[a][b]);
      if (b==c-1) 
	  {
        printf("\n\n");
      }
    }
  return 0;
}
