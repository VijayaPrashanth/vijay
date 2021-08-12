#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter age : ";
	cin>>age;
	if(age>=18)
	{
		cout<<"MAJOR and eligible to vote !";
		if(age>=25)
		{
			cout<<"eligible to stand in election";
		}
		else
		{
			cout<<endl<<"But not eligible to stand in election";
		}
		
	}
	else
	{
		cout<<"MINOR and not eligible to vote";
	}
}
