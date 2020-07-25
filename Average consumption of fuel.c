#include<stdio.h>
int main()
{  float a;
 int d,f;
  printf("Enter Distance in km");
  scanf("%d",&d);
  printf("Enter total fuel spent in litres");
  scanf("%d",&f);
  a=d/f;
  printf("Average Consumption(km/litre) is:%0.2f litres",a);	
}

