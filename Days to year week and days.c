#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter Days\n");
	scanf("%d",&a);
	b=a/365;
	c=(a%365)/7;
	d=a-((b*365)+(c*7));
	printf("%d Years\n",b);
		printf("%d Weeks\n",c);
	printf("%d Days\n",d);

}
