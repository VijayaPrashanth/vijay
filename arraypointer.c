#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,sum=0;
	int *a[3];
	for(i=0;i<3;i++)
	{
		a[i] = (int *)malloc(3 * sizeof(int));
	}
	printf("\nInput elements in the matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	for(int k=0;k<3;k++)
	{
		for(int l=0;l<3;l++)
		{
			if(k==l)
			{
				sum=sum+a[k][l];
			}
		}
	}
	printf("\nThe sum of the diagonal elements is : %d",sum);
return 0;
}
