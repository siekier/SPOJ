
#include <iostream>

using namespace std;

int t;

int main()
{
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++)
			cin>>s[i];
		int w;
		w=n-1;	
		for(int i=0;i<n;i++)
			w+=s[i];
		cout<<w<<'\n';		
	}
	return 0;
}

