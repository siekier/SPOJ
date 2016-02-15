
#include <iostream>

using namespace std;

char d;
int a,b,r[10];

int main()
{
	for(int i=0; i<10; i++) r[i]=0;
	while(cin>>d)
	{
		cin>>a>>b;
		switch(d)
		{
			case '+': cout<<r[a]+r[b]<<endl;
					  break;
			case '-': cout<<r[a]-r[b]<<endl;
					  break;
			case '*': cout<<r[a]*r[b]<<endl;
					  break;
			case '/': cout<<r[a]/r[b]<<endl;
					  break;
			case '%': cout<<r[a]%r[b]<<endl;
					  break;
			case 'z': r[a]=b;
					  break;
		}
	}
	return 0;
}

