#include<stdio.h>
#include<conio.h>
int main()
{
	int bmi;
	printf("enter the bmi:");
	scanf("%d",&bmi);
	if(bmi<18)
	{
		printf("under weight",bmi);
	}
	else if(bmi==18)
	{
		printf("normal  weight");
	}
	else if(bmi>25)
	{
		printf("overweight");
	}
	getch();
	
}
