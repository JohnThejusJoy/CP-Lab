#include<stdio.h>
void main()
{
int length,breadth,area,perimeter;
printf("enter length");
scanf("%d",&length);
printf("enter breadth");
scanf("%d",&breadth);
area=length*breadth;
perimeter=2*(length+breadth);
if(area>perimeter)
	{
	printf("area is greater than perimeter");

	}
else
	printf("area is less than perimeter");
}
