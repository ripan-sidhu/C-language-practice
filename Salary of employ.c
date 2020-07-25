#include<stdio.h>
int main()
{
	int id,hour;
	float wage,sal;
	printf("Enter Employ ID:\n");
	scanf("%d",&id);
	printf("Enter working hours:\n");
	scanf("%d",&hour);
	printf("Enter Salary Amount/hour in $:\n");
	scanf("%f",&wage);
	sal=hour*wage;
	printf("Employ ID:%d\n",id);
	printf("Salary:$%0.2f",sal);
}
