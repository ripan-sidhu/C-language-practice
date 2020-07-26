#include<stdio.h>
int main()
{ int a;
  printf("Enter an integer\n");
  scanf("%d",&a);
  if(a>=0 && a<=20)
  {
  	printf("%d lies between [0,20]",a);
  }
  else if(a>20 && a<=40)
  {
  	printf("%d lies between (20,40]",a);
  }
  else if(a>40 && a<=60)
  {
  	printf("%d lies between (40,60]",a);
  }
  else if(a>60 && a<=80)
  {
  	printf("%d lies between (60,80]",a);
  }
  else
  {
  	printf("OUT OF RANGE\n");
  }
}
