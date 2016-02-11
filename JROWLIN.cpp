#include <iostream>
#include <iomanip>
using namespace std;

float a,b,c;

int main()
{
	cin>>a>>b>>c;
	if(a!=0) cout<<setprecision(2)<<fixed<<(c-b)/a;
	if(a==0 && (b-c)==0) cout<<"NWR";
	if(a==0 && (b-c)!=0) cout<<"BR";
	return 0;
}

