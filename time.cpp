#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
	private : 
		int h,m,s,t;
	public :
		int in();
		int convert();
		int display();
};
int Time :: in()
{
	cout<<"Hours?  ";
	cin>>h;
	cout<<"\nMinutes?  ";
	cin>>m;
	cout<<"\nSeconds?  ";
	cin>>s;
}
int Time :: convert()
{
	t=(h*3600)+(m*60)+s;
}
int Time :: display()
{
	cout<<"\nThe time is : "<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m<<":"<<setw(2)<<setfill('0')<<s;
	cout<<"\nTime in total seconds : "<<t;
}
int main()
{
	Time o;
	o.in();
	o.convert();
	o.display();
}
