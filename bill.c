#include<stdio.h>
int main()

{ 
        int unit;
		float bill,hotal,charge;
		
		printf("enter year unit:");
		scanf("%d",&unit);
		
		if(unit<=100)
{
        bill=unit+0.6;
		printf("total bill of unit is %f ",bill);
}
        else if(unit>100&&unit<300);
{
        bill=((100*0.6)+(unit-100)*0.8);
        printf("total bill of unit rs");		
}
        if(unit>100&&unit<200)
{       
        bill*(100*0.6)+(200*0.8)+(300*0.9);	
        printf("total bill of unit is ");		
}
        if(bill<50)
{
        charge=50;
}
        else if(bill>300)
{
        charge=bill+bill+0.15;
}
        else
{
        charge=bill;
        printf("%f charge");
}
		
		return 0;
}