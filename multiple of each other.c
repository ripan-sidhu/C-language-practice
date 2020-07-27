#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter First Number\n");
	scanf("%d",&a);
	
	printf("Enter Second Number\n");
	scanf("%d",&b);
	
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	printf("_________________________________________\n");
 if((b % a)== 0) 
	{
		printf("multiple");
	}
	
	else 
	{
	printf("not muptiple");
   }
   return 0;
}

