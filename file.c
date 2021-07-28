#include<stdio.h>
#include<conio.h>
int main()
{
	int i,count=0;
	char ch,s;
	FILE *fp;
	fp=fopen("test1.txt","w");
	fprintf(fp,"My Captain");
	fclose(fp);
	fp=fopen("test1.txt","r");
	printf("content in the file : ");
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=fgetc(fp);
		count++;
	}
	char sh[count];
	fp=fopen("test1.txt","a+");
	for(int i=count;i>=0;i--)
	{
		s=getc(fp);
		sh[i]=s;
	}
	printf("\nreverse of the content in the file : ");
	for(int j=0;j<=count;j++)
	{
		printf("%c",sh[j]);
	}
	fclose(fp);
}
