#include<stdio.h>
void main()
{
float time;
printf("enter time of worker");
scanf("%f",&time);
if(time>=2&&time<3)
 printf("worker is highly efficient");
if(time>=3&&time<4)
 printf("worker is ordered to improve speed");
if(time>=4&&time<5)
 printf("worker is given training to improve speed ");
if(time>=5)
 printf("worker is terminated");
}


