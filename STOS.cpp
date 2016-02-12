#include <iostream>

using namespace std;

char d;
int stos[10],p=0;

int main()
{
	while(cin>>d)
	{
		if(d=='+')
		{
			if(p==10) cout<<":("<<endl;
			else
			{
				cin>>stos[p];
				p++;
				cout<<":)"<<endl;
			}
		}
		if(d=='-')
		{
			if(p==0) cout<<":("<<endl;
			else
			{
				cout<<stos[p-1]<<endl;
				p--;
			}
		}
	}
	return 0;
}

