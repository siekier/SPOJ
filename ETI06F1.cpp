
#include <iostream>
#include <iomanip>

using namespace std;

double d, r, R, S;

double kw(float x)
{
	return x*x;
}

int main()
{
		cin>>r>>d;
		double pi=3.141592654;

		S=pi*((4*kw(r)-kw(d))/4);
		cout<<setprecision(2)<<fixed<<S<<endl;	
	return 0;
}

