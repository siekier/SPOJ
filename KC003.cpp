#include <iostream>
#include <cmath>
using namespace std;

float a,b,c;
int main()
{
	while(cin>>a>>b>>c)
	{
		if(abs(b-c)<a && (b+c)>a) cout<<1<<endl;
		else cout<<0<<endl;
	}
	return 0;
}

