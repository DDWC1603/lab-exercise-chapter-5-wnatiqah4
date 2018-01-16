//student name : WAN NURUL ATIQAH

#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    void masuk_tak();
    getch();
}

void masuk_tak()
{
	char ans,c;
	
	cout<<endl<<"Dia shoot masuk tak? (answer y-yes atau n-tidak"<<endl;
	

	ans='n';
	while(c!='y' && c!='y')
    {
		cin>>ans;
		if(c!='n' && c!='n')
		cout<<endl<<"cakap lah bebetul, try again: "<<endl;
	}

	if(c=='n')
	{
		cout<<endl<<"the fudge?!";
		masuk_tak();
	}
	cout<<endl<<"chantek!"<<endl;
}
