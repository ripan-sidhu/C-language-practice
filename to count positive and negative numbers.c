#include<stdio.h>
int main()
{   int a[5];
    int n=0,p=0,i;
	printf("Enter first number");
	scanf("%d",&a[0]);
	printf("Enter second number");
	scanf("%d",&a[1]);
	printf("Enter third number");
	scanf("%d",&a[2]);
	printf("Enter fourth number");
	scanf("%d",&a[3]);
	printf("Enter fifth number");
	scanf("%d",&a[4]);
	for(i=0;i<5;i++)
	{
		if(a[i]>0)
		{
			p++;
		}
		else if(a[i]<0)
		{
			n++;
		}
	}
	printf("Positive Numbers=%d\n",p);
	printf("Negative Numbers=%d\n",n);
	
}
