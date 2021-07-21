#include<stdio.h>
void main()
{
	int rem,num,sum=0;
	printf("Enter a Number : ");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
	}
	printf("Sum of digits of the given number : %d",sum);
}
