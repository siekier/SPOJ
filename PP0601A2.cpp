
#include <iostream>

using namespace std;

int t[100];

int main()
{
	int i=0;
	int j=0;
	while(cin>>t[i])
	{
		if(i==0) cout<<t[i]<<endl;
		else if (i>0&&j<3)
		{
			if((t[i]==42)&&((t[i-1])!=42))
			{
				cout<<t[i]<<endl;
				j++;
			}
			else cout<<t[i]<<endl;
			
		}

	i++;
	}
	return 0;
}

