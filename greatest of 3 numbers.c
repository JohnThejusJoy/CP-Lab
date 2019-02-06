#include<stdio.h>
void main()
{
	int number1,number2,number3,big;
	printf("enter 3 numbers");
	scanf("%d%d%d",&number1,&number2,&number3);
	big=number1;
	if(number2>big)
		big=number2;
	if(number3>big)
		big=number3;
		printf("%d is big",big);
}
