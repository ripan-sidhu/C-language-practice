#include<stdio.h>
int main()
{
	int a,i,s;
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		if(i%2==0)
		{
			s=i*i;
			printf("%d ^ %d= %d \n",i,i,s);
		}
	}
}
	
	
	
