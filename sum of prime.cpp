#include <iostream>
using namespace std;
int prime(int n);
int main() 
{
    int n, i;
    int flag = 0;
    cout << "Enter a positive  integer: ";
    cin >> n;
    for(i = 2; i <= n/2; ++i) 
	{
        if(prime(i)) 
		{
			if (prime(n-i)) 
			{
                cout << n << " = " << i << " + " << n-i << endl;
                flag = 1;
            }
        }
    }
    if (!flag)
      cout << n << " can't be expressed as sum of two prime numbers.";
    return 0;
}
int prime(int n) 
{
    int i;
    int f = 1;
    for(i=2;i<=n/2;++i) 
	{
        if(n%i==0) 
		{
            f = 0;
            break;
        }
    }
    return f;
}
