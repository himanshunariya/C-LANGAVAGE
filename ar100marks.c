 #include<stdio.h>
int main()
{
    int guj[5],mat[5],sc[5],t[5],a;
	float pr[5];
	
	for(a=0;a<5;a++)
	
	{
	    printf("student-%d\n",a+1);
		
		printf("Gujarati:");
		scanf("%d",&guj[a]);
		
		printf("Maths:");
		scanf("%d",&mat[a]);
		
		printf("Science:");
		scanf("%d",&sc[a]);
		
		t[a]=guj[a]+mat[a]+sc[a];
		
		pr[a]=t[a]*100/300;
		
	}
	
	printf("\nNo.\tGujarati\tMaths\t\tScience\t\tTotal\t\tPercentage\tGrade");
	
	for(a=0;a<5;a++)
	
	{
	
	    printf("\n%d\t%d\t\t%d\t\t%d\t\t%d\t\t%.2f\t\t",a+1,guj[a],mat[a],sc[a],t[a],pr[a]);
		
	if(pr[a]>=95)
	{
		printf(" A+");
	}
	else if(95>pr[a]&&pr[a]>=90)
	{
		printf(" A");
	}
	else if(90>pr[a]&&pr[a]>=75)
	{
		printf(" B");
	}
	else if(75>pr[a]&&pr[a]>=60)
	{
		printf(" C");
	}
	else if(60>pr[a]&&pr[a]>=45)
	{
		printf(" D");
	}
	else if(45>pr[a]&&pr[a]>=35)
	{
		printf(" E");
	}
	else
	{
		printf(" F");
	}
		
	}
	
	return 0;
	
}