#include <iostream>

using namespace std;

float A,B,C,D;

int main()
{
	while(cin>>A>>B>>C)
	{
		D=B*B-4*A*C;
		if (D>0) cout<<2<<endl;
		else if (D==0) cout<<1<<endl;
		else cout<<0<<endl;
	}
	return 0;
}

