#include<stdio.h>
void main()
{
int num,arm=0,digit,num1;
printf("enter num:");
scanf("%d",&num);
num=num1;
while(num>0)
	{
	digit=num%10;
	arm=arm+(digit*digit*digit);
	num=num/10;
	}
if(arm==num1)
	{
	printf("is amstrong");	
	}
else
	{
	printf(" is not");	
	}
}
