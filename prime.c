#include<stdio.h>
int prime(int n,int s);
int main()
{
	int num,primeno,k;
	printf("Enter a Positive Number : ");
	scanf("%d",&num);
	if(num>0)
	{
		k=num/2;
		primeno=prime(num,k);
		if(primeno==0)
		{
			printf("\n%d is a Prime number",num);
		}
		else
		{
			printf("\n%d is not a Prime number",num);
		}
	}
	else
	{
		printf("Enter a valid number");
	}
}
int prime(int n,int s)
{
	int flag=0;
	if(s==1)
	{
		flag=0;
	}
	else
	{
		if(n%s==0)
		{
			flag=1;
		}
		else
		{
			prime(n,s-1);
		}
	}
	return flag;
}
