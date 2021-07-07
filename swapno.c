#include<stdio.h>
int main()
{
  int a,b,temp;
  printf("Enter the value of a : ");
  scanf("%d",&a);
  printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Values before Swapping\n");
	printf("a:%d\tb:%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nValues after Swapping\n");
	printf("a:%d\tb:%d",a,b);
	return 0;
}
