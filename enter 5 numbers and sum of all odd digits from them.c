#include<stdio.h>
int main()
{
	int a,b,c,d,e,odd;
	printf("Enter first number\n");
	scanf("%d",&a);
	printf("Enter second number\n");
	scanf("%d",&b);
	printf("Enter third number\n");
	scanf("%d",&c);
	printf("Enter fourth number\n");
	scanf("%d",&d);
	printf("Enter fifth number\n");
	scanf("%d",&e);
	if(a%2 !=0)
	{
		odd=0+a;
	}
	if(b%2 !=0)
	{
		odd=odd+b;
	}
	if(c%2 !=0)
	{
		odd=odd+c;
	}
	if(d%2 !=0)
	{
		odd=odd+d;
	}
	if(e%2 !=0)
	{
		odd=odd+e;
	}
	
	printf("_______________________\n");
	printf("The sum of odd digits is:%d",odd);
}
