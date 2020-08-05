#include<stdio.h>

	int main()
	{
		int a,i;
		printf("Enter a number:");
		scanf("%d",&a);
		for(i=1;i<=100;i++)
		{
			if(i%a==3)
			{
				printf("%d\n",i);
			}
		}
	}

