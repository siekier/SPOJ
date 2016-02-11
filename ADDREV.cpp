#include <iostream>
using namespace std;

int N,a,b,n,m;
/*int reverse(int x)
{

}*/

int main()
{
	/*cin>>N;
	for(int i=0; i<N; i++)
	{
		cin>>a>>b;
	}*/
	cin>>a;
	n=a;
	m=0;
	while(n/10>=1)
	{
		m=
		m=(n%10)*10+n/10;
		n=n/10;
		cout<<n<<" "<<m<<endl;
	}

	return 0;
}

