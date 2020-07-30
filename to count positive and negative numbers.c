#include<stdio.h>
int main()
{   int a[5];
    int n,p,i;
	printf("Enter first number");
	scanf("%d",&a[1]);
	printf("Enter second number");
	scanf("%d",&a[2]);
	printf("Enter third number");
	scanf("%d",&a[3]);
	printf("Enter fourth number");
	scanf("%d",&a[4]);
	printf("Enter fifth number");
	scanf("%d",&a[5]);
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
