#include<stdio.h>
int main()
{
	float a[5];
	float avg;
	int n=0;
	float t=0;
	int j;
	printf("Enter First Number");
	scanf("%f",&a[0]);
	printf("Enter Second Number");
	scanf("%f",&a[1]);
	printf("Enter Third Number");
	scanf("%f",&a[2]);
	printf("Enter Fourth Number");
	scanf("%f",&a[3]);
	printf("Enter Fifth Number");
	scanf("%f",&a[4]);
	
	for(j=0;j<5;j++)
	{
		if(a[j]>0)
		{
			n++;
			t=t+a[j];
		}
	}
	avg=t/n;
	
	printf("%d\n",n);
	
	printf("%0.2f",avg);
	
}
