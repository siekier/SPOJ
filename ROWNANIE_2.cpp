#include <iostream>
#include <math.h>

using namespace std;

float A,B,C,D;

int main()
{
	while(cin>>A>>B>>C)
	{
		D=B*B-4*A*C;
		if (D>0)
		{
			cout<<(-B-sqrt(D))/2*A<<endl;
			cout<<(-B+sqrt(D))/2*A<<endl;
		}
		else if (D=0) cout<<-B/2*A<<endl;
		
	}


	return 0;
}

