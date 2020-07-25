#include<stdio.h>
int main()
{int a,h,r,f,t;
	printf("Enter the amount:");
	scanf("%d",&a);
    t=a/100;
    a=a-(t*100);
	printf("notes of 100=  %d\n",t);
	t=a/50;
	a=a-(t*50);
	printf("notes of  50=  %d\n",t);
	t=a/20;
	a=a-(t*20);
	printf("notes of   20= %d\n",t);
	t=a/10;
	a=a-(t*10);
	printf("notes of   10= %d\n",t);
	t=a/5;
	a=a-(t*5);
	printf("notes of    5= %d\n",t);
	t=a/2;
	a=a-(t*2);
	printf("notes of    2= %d\n",t);
	t=a/1;
	a=a-(t*1);
	printf("notes of    1= %d\n",t);
}
