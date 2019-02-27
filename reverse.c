#include<stdio.h>
void main()
{
	int num1,rev=0,rem;
	printf("enter num1:");
	scanf("%d",&num1);
	while(num1>0)
		{
		
		rem=num1%10;
		rev=rev*10+rem;
		num1=num1/10;
		}
	printf("%d",rev);
}
