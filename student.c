#include<stdio.h>
struct student
{
    int id;
    char name[50];
    float per;
}s1,s2;
int main()
{
    struct student s3,s4,s5;
    printf("Enter the id of student:\n");
    scanf("%d",&s1.id);
        scanf("%d",&s2.id);
            scanf("%d",&s3.id);
                 scanf("%d",&s4.id);
                      scanf("%d",&s5.id);

    printf("Enter the name of student:\n");
                          scanf("%s",&s1.name);
                     scanf("%s",&s2.name);
               scanf("%s",&s3.name);
         scanf("%s",&s4.name);
    scanf("%s",&s5.name);

    printf("Enter the percentage of student:\n");
    scanf("%f",&s1.per);
         scanf("%f",&s2.per);
              scanf("%f",&s3.per);
                   scanf("%f",&s4.per);
                        scanf("%f",&s5.per);

     printf("The first student id,name or per =\n");
                         printf("Id is %d\n",s1.id);
                 printf("nane is %s\n",s1.name);
           printf("percentage is %f\n",s1.per);

    printf("The second student id,name or per =\n");     
    printf("Id is %d\n",s2.id);
          printf("nane is %s\n",s2.name);
                 printf("percentage is %f\n",s2.per);

    printf("The third student id,name or per =\n");
                          printf("Id is %d\n",s3.id);
                   printf("nane is %s\n",s3.name);
            printf("percentage is %f\n",s3.per);

    printf("The fourth student id,name or per =\n");
    printf("Id is %d\n",s4.id);
          printf("nane is %s\n",s4.name);
                 printf("percentage is %f\n",s4.per);

    printf("The fifth student id,name or per =\n");
                    printf("Id is %d\n",s5.id);
             printf("nane is %s\n",s5.name);
      printf("percentage is %f\n",s5.per);

    return 0;
}