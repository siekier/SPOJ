#include <iostream>

using namespace std;

int t,s,n;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>s;
		n=0;
		while(s!=1)
		{
			if(s%2==0) s=s/2;
			else s=3*s+1;
			n++;
		}
		cout<<n<<endl;	
	}
	return 0;
}

