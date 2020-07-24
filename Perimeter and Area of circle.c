#include<stdio.h>
int main()
{
	int a,b;
	float c,d;
	printf("Enter Radius\n");
	scanf("%d", &a);
    c=2*3.14*a;
    printf("Perimeter of this rectangle is %f\n",c);
	d=3.14*a*a;
	printf("Area of this rectangle is %f",d);
}
