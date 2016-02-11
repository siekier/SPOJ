
#include <iostream>

using namespace std;

int t,a,b;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		while(a!=b)
		{
			if(a>b) a=a-b;
			else b=b-a;
		}		
		cout<<a+b<<endl;
	}
	return 0;
}

