
#include <iostream>

using namespace std;

int t;

class Segment
{
	int n,w,*s;

	public:
	Segment(int segm=1)
	{
		n=segm;
		s=new int[segm];
		for(int i=0;i<n;i++)
			s[i]=0;
	}
	void wczytaj()
	{
		cin>>n;
		s=new int[n];
		for(int i=0;i<n;i++)
			cin>>s[i];
	}
	void oblicz()
	{
		w=n-1;	
		for(int i=0;i<n;i++)
			w+=s[i];
		delete [] s;
	}
	void wypisz()
	{
		cout<<w<<'\n';
	}
};

int main()
{
	cin>>t;
/*	Segment sg1;
	sg1.oblicz();
	sg1.wypisz();
	Segment sg2(3);
	sg2.oblicz();
	sg2.wypisz();
*/
	Segment sg[t];
	for(int i=0;i<t;i++)
	{
		sg[i].wczytaj();
		sg[i].oblicz();
		sg[i].wypisz();
	}
	return 0;
}

