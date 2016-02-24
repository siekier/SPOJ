
#include <iostream>

using namespace std;

int q;

class Posiedzenie
{
	int n,k;

	public:
	Posiedzenie(int a=0,int b=0)
	{
		n=a;
		k=b;
	}
	
	void wczytaj()
	{
		cin>>n>>k;
	}
	void wynik()
	{
		if((n%2==0)&&(k<=n/2)) cout<<k+n/2<<endl;
		if((n%2==0)&&(k>n/2)) cout<<k-n/2<<endl;
		if(n%2!=0) cout<<"BRAK"<<endl;
	}
};
int main()
{
/*	Posiedzenie p1(4,3);
	p1.wczytaj();
	p1.wynik();
*/
	cin>>q;
	Posiedzenie p[q];
	for(int i=0; i<q; i++)
	{
		p[i].wczytaj();
		p[i].wynik();
	}
	return 0;
}

