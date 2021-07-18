#include<stdio.h>
void main()
{
	int stair;
	printf("Enter the number of stairs : ");
	scanf("%d",&stair);
	for(int i=0;i<=stair;i++)
	{
		for(int j=0;j<i;j++)
		{
			printf("01");
		}
		printf("\n");
	}
}
