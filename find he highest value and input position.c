#include<stdio.h>
int main()
{ int s,i,j,max=0,p=0;   
printf("How many numbers you want to enter?\n");
  scanf("%d",&s);
  printf("Enter the Numbers:-\n");
	int a[s];
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
		
	}
		for(j=0;j<s;j++){
		
		if(a[j]>max)
		{
			max=a[j];
			p=j;
		}
		
	}
	printf("Maximum Number=%d\n",max);
	printf("Position=%d\n",p+1);	
}
