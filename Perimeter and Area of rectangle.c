#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter height\n");
	scanf("%d", &a);
    printf("Enter width\n");
    scanf("%d", &b);
    c=2*(a+b);
    printf("Perimeter of this rectangle is %d\n",c);
	d=a*b;
	printf("Area of this rectangle is %d",d);
}
