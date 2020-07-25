#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter first integer:");
  scanf("%d",&a);
  printf("Enter second integer:");
  scanf("%d",&b);
  printf("Enter third integer:");
  scanf("%d",&c);
  if(a>b&&b>c)
  {
  	printf("%d is the maximum",a);
  }
  if(a<b&&b>c){
  printf("%d is the maximum",b);
}
  if(a<b&&b<c)
 {
 	printf("%d is the maximum",c);
  } 
}

