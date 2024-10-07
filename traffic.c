#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("enter the color:");
	scanf("%c",&ch);
	if(ch=='r')
	{
		printf("stop",ch);
	}
	if(ch=='y')
	{
		printf("wait");
	}
	if(ch=='g')
	{
		printf("go");
	}
	getch();
	
}
