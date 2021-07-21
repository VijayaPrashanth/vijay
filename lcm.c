#include<stdio.h>
int lcm(int m,int n,int k);
int main()
{
	int a,b,l,t=1;
	printf("Enter two numbers : ");
	scanf("%d\t%d",&a,&b);
	l=lcm(a,b,t);
	printf("LCM of %d and %d is : %d",a,b,l);
}
int lcm(int m,int n,int k)
{
	if(k%m==0&&k%n==0)
	{
		return k;
	}
	else
	{
		k++;
		lcm(m,n,k);
	}
}
