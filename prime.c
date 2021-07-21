#include<stdio.h>
int prime(int n);
int main()
{
	int num,primeno;
	printf("Enter a Positive Number : ");
	scanf("%d",&num);
	if(num>0)
	{
		primeno=prime(num);
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
int prime(int n)
{
	int flag=0,k=n;
	if(k==1)
	{
		flag=1;
	}
	else
	{
		for(int i=2;i<=k/2;i++)
		{
			if(k%i==0)
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
		}
	}
	return flag;
}
