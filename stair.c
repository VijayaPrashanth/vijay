#include<stdio.h>
void main()
{
	int stair;
	int k=0;
	printf("Enter the number of stairs : ");
	scanf("%d",&stair);
	while(k<stair)
	{
		for(int i=0;i<=k;i++)
		{
			printf("01");
		}
		printf("\n");
		k++;
	}
}
