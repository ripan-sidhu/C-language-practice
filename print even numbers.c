#include<stdio.h>
int main()
{   int a,i;
printf("Enter the number till which you need even numbers:\n");
scanf("%d",&a);
	
	for(i=0;i<=a;i++)
	{
		if(i%2==0){
		
		printf("%d\n",i);
	}
	}
}
