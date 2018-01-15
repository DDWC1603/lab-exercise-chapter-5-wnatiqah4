#include <iostream>
using namespace std;

void changesA(int a);
int min(int x,int y=10);

int main()

{
	int x,y;
	cin>>min(x,y);

	changesA(1);
	return 0;
}

int min(int x,int y)
{

	if(x<y)
		return x;
	else 
		return y;
}

void changesA(int a)
{
	++a;
	cout<<"ni dia :"<<a;

}
