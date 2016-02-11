#include <iostream>

using namespace std;

int main()
{
	int a,tablica[100],i=0;
	while(cin>>tablica[i]) i++;
	cout<<endl;
	for(i--; i>=0; i--) cout<<tablica[i]<<' ';
	return 0;
}

