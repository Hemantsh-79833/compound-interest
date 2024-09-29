#include<stdio.h>
#include<conio.h>
int main()
{
	float p,r,t,a,ci;
	printf("enter the value of p:");
    	scanf(" %f",&p);
	printf("enter the value of r:");
		scanf(" %f",&r);
	printf("enter the value of t:");
		scanf(" %f",&t);
	ci=p*(pow((1+r/100),t));
	printf("the value of compound intrest is:%f",ci);
	getch();
}
