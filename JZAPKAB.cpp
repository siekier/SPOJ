#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

class Data
{
	private:
	int suma,data;
	string slowo;

	public:
	Data(string s="A")
	{
		//wczytaj();
		slowo=s;
	}

	void wczytaj()
	{
		cin>>slowo;
	}
	void przelicz()
	{
		int liczby[23]={1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100,200\
			,300,400,500};
		char litery[23]={'A','B','C','D','E','F','G','H','I','K','L','M','N'\
			,'O','P','Q','R','S','T','V','X','Y','Z'};
		transform(slowo.begin(),slowo.end(),slowo.begin(),\
			::toupper);
		int n=slowo.size();
		suma=0;
		for(int i=0; i<n; i++)
		{
			int j=0;
			while(slowo[i]!=litery[j])
			{
				j++;
			}
			suma+=liczby[j];
		}
	}
	void wynik()
	{
		cout<<suma<<endl;
	}
};

int main()
{
	Data d1("INFO");
	d2.wczytaj();
	d1.przelicz();
	d1.wynik();

/*	Data d2;
	d2.wczytaj();
	d2.przelicz();
	d2.wynik();
	
	Data d3("MISKA");
	d3.przelicz();
	d3.wynik();

	Data d4;
	d4.przelicz();
	d4.wynik();

	Data d5("miska");
	d5.przelicz();
	d5.wynik();
*/
	return 0;
}

