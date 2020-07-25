#include<stdio.h>
int main()
{   int d,y,m;
    printf("*********This program is based on assumption that each month is of 30 days***********\n");
	printf("Enter number of days");
	scanf("%d",&d);
	y=d/365;
	printf("%d\n",y);
	d=d-(y*365);
	m=d/30;
	printf("%d\n",m);
	d=d-(m*30);
	printf("%d",d);
}
