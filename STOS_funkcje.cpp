#include <iostream>
#include <cstdlib>

using namespace std;

char d;
int stos[10],p=0;

vo\
id smi\
le()
{
	cout<<":)"<<endl;
}
void sad()
{
	cout<<":("<<endl; 
}
void push()
{
	if(p==10) sad();
	else
	{
		cin>>stos[p];
		smile();
		p++;
	}
}

void pop()
{
	if(p==0) sad();
	else
	{
		cout<<stos[p-1]<<endl;
		p--;
	}
}
int main()
{
	system("clear");
	while(cin>>d)
	{
		if(d=='+') push();
		if(d=='-') pop();
	}
	return 0;
}

