#include<stdio.h>
int main()
{ printf("**********This program is to calcualte the distance between two points on a line************ \n");
	float x1,y1,x2,y2,d;
	printf("Enter x1:");
	scanf("%f",&x1);
	printf("Enter y1:");
	scanf("%f",&y1);
	printf("Enter x2:");
	scanf("%f",&x2);
	printf("Enter y2:");
	scanf("%f",&y2);
	d=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("%0.4f",sqrt(d));
}



/*
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
*/

