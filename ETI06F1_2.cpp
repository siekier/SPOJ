
#include <iostream>
#include <math.h>

using namespace std;

double d, r, R, S;

int main()
{
	cin>>r>>d;
	R=sqrt((4*pow(r,2)-pow(d,2))/4);
	S=M_PI*pow(R,2);
	cout<<S<<endl;	
	
	return 0;
}

