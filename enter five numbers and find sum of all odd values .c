#include<stdio.h>
int main()
{
	int a[5];
	int i,p=0;
	int s=0;
	printf("Enter First Number\n");
	scanf("%d",&a[0]);
	printf("Enter Second Number\n");
	scanf("%d",&a[1]);
	printf("Enter Third Number\n");
	scanf("%d",&a[2]);
	printf("Enter Fourth Number\n");
	scanf("%d",&a[3]);
	printf("Enter Fifth Number\n");
	scanf("%d",&a[4]);
	
    for(i=0;i<5;i++)
    {
	  if(a[i] % 2!=0)
	  {
	  	s=s+a[i];
	 
	  }
	  
    }
     	printf("The sum of odd digits is =%d",s);
}
