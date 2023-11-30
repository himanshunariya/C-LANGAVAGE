#include<stdio.h>
void main()
{
    int arr[4][4],i,j;
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("Enter value for arr[%d][%d]: ", i,j);
            scanf("%d",&arr[i][j]);
        }
		printf("\n");
    }
}