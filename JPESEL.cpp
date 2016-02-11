#include <iostream>
using namespace std;

int t,suma;
long int p;
int main()
{
	cin>>t;
	for(int i=0; i<t; i++)
	{
		suma=0;
		cin>>p;
		suma=p/10000000000*1;
		suma=suma+(p/1000000000)%10*3;
		suma=suma+(p/100000000)%10*7;
		suma=suma+(p/10000000)%10*9;
		suma=suma+(p/1000000)%10*1;
		suma=suma+(p/100000)%10*3;
		suma=suma+(p/10000)%10*7;
		suma=suma+(p/1000)%10*9;
		suma=suma+(p/100)%10*1;
		suma=suma+(p/10)%10*3;
		suma=suma+p%10*1;
		if((suma%10)==0) cout<<"D"<<endl;
		else cout<<"N"<<endl;
	}
	return 0;
}

