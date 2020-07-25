#include<stdio.h>
int main()
{int p,q,r,s;
	printf("Enter 4 integers\n");
	scanf("%d",&p);
	scanf("%d",&q);
	scanf("%d",&r);
	scanf("%d",&s);
	if(r>0 && s>0 && p%2==0 && q>r && s>p && (r+s)>(p+q))
	{
	printf("Correct Values");
}
    else {
     	printf("Wrong Values");
	 }

	
}
