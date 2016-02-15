#include <iostream>
#include <string>

using namespace std;

int t;
string wyraz;
//char wyraz[10];

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>wyraz;
//		cout<<wyraz<<endl;
		for(int i=0; i<20; i++)
		{
			if(wyraz[i]!=wyraz[i+1]) cout<<wyraz[i];
		//	else if(wyraz[i]==wyraz[i+1])
			else
			{
				int j=0;
				while(wyraz[i]==wyraz[i+1])
				{
					j++;
					i++;
				}
				if(j==2) cout<<wyraz[i]<<wyraz[i];
				else if (j>2) cout<<j<<wyraz[i];
			//	i--;			
			}
		}
	}	
	return 0;
}

