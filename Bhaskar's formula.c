#include<stdio.h>
int main()
{
	int a,b,c,r;
	double x1,x2;
	printf("enter first number\n");
	scanf("%d",&a);
	
	printf("enter second number\n");
	scanf("%d",&b);
	
	printf("enter third number\n");
	scanf("%d",&c);
	
	r=(b*b)-((4)*(a)*(c));
	if(r>0 && a !=0)
	{   r=sqrt(r);
		x1=(-b+r)/(2*a);
		x2=(-b-r)/(2*a);
		printf("x1=%.5lf\n",x1);
		printf("x2=%.5lf\n",x2);
	}
	else {
		printf("\nIMPOSSIBLE TO FIND THE ROOTS");
	}
}
