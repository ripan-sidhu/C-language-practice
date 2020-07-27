#include<stdio.h>
int main()
{
	int a,b,c,p;
	printf("Enter first number\n");
	scanf("%d",&a);
	printf("Enter second number\n");
	scanf("%d",&b);
	printf("Enter third number\n");
	scanf("%d",&c);
	if((a+b)>c||((b+c)>a)||(c+a)>b)
	{
		printf("It is possible to create a Triangle\n");
		p=a+b+c;
		printf("Perimeter of the Triangle is:%d",p);
	}
	else
	{
		printf("Sorry It is impossible to create a Triangle");
	}
}
