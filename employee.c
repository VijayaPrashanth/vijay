#include<stdio.h>
#include<stdlib.h>
struct employee
{
	int empno;
	char empname[30];
	char deptname[30];
	int salary;
};
struct employee e[20];
void display(int k);
void main()
{
	int n,i;
	printf("Enter the no.of.employees : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n\tEmployee %d details :\n",i+1);
		printf("employee number : ");
		scanf("%d",&e[i].empno);
		printf("\nName :");
		scanf("%s",&e[i].empname);
		printf("\nDepartment : ");
		scanf("%s",&e[i].deptname);
		printf("\nSalary : ");
		scanf("%d",&e[i].salary);
	}
	display(n);
}
void display(int k)
{
	printf("\n\n\t\tEmployee Details\n");
	printf("\nEmployeeNumber\tEmployeeName\tDepartmentName\tSalary");
	for(int j=0;j<k;j++)
	{
		printf("\n");
		printf("%d\t\t",e[j].empno);
		printf("%s\t\t",e[j].empname);
		printf("%s\t\t",e[j].deptname);
		printf("%d",e[j].salary);
	}	
}
