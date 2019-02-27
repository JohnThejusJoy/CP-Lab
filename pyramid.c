#include<stdio.h>
int main()
{
int p,k,number;
printf("enter number of rows");
scanf("%d",&number);
for(p=1;p<=number;p++)
	{
	for(k=1;k<=p;k++)
		{
		printf("%d",k);
		}
 	printf("\n");
	}
return 0;
}
