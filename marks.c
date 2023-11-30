#include<stdio.h>
int main()
{
	  int marks;
	  float total_marks = 500.0;
	  float percentage;
	  char grade;

	  printf("enter the marks obtained:");
	  scanf("%d",&marks);

	  percentage = (marks/total_marks)*100;

	  if(marks>75)
{
	  grade='A';
}
     else if (marks>60)
{
	  grade='B';
}
     else if (marks>45)
{
	  grade='C';
}
     else if (marks>35)
{
	  grade='D';
}
     else
{
	  grade='F';
}
	 printf("total marks: %.2f\n",total_marks);
	 printf("marks obtained: %d\n",marks);
	 printf("percentage: %.2f%%\n",percentage);
	 printf("grade: %c\n",grade);

    return 0;
}