#include<stdio.h>
int main()
{
	double w1,w2,n1,n2,result;
	printf("Enter the weight of the first commodity\n");
	scanf("%lf",&w1);
	printf("Enter the quantity\n");
	scanf("%lf",&n1);
	printf("Enter the weight of the second commodity\n");
	scanf("%lf",&w2);
	printf("Enter the quantity\n");
	scanf("%lf",&n2);
	
	result=((w1*n1)+(w2*n2))/(n1+n2);
      
	  printf("The average value of two commodities is %lf",result);	
   
	
}
