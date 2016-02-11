

#include <iostream>

using namespace std;

int t,n;

int main()
{
	cin>>t;
	for(int i=0; i<t; i++)
	{
		cin>>n;
		int tablica[n];
		for(int i=0; i<n; i++)
		{
			cin>>tablica[i];
		}
		for(int i=1; i<n;i=i+2)
		{
			cout<<tablica[i]<<' ';
		}
		for(int i=0; i<n;i=i+2)
		{
			cout<<tablica[i]<<' ';
		}
		cout<<endl;	
	}
	return 0;
}

