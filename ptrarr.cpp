#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int *a;
	a=new int[n];
	cout<<"Enter the elements : \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int *p = a;
	cout<<"\nYour elements : \n";
	for(int j=0;j<n;j++)
	{
		cout<<"\n"<<p[j];
	}
}
