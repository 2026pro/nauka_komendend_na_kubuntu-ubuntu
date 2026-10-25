#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>

using namespace std;

string komenda, nazwa;

int main()
{
	while(komenda!= "sudo apt install")
	{
	cout<<" Podaj komende"<<endl;
	getline(cin, komenda);

	if(komenda=="sudo apt install")
	{
		cout<<"Podaj nazwe pakietu apt";
		getline(cin, nazwa);
		cout<<"instaluje" <<nazwa<<endl;
		sleep(5);
		system("clear");
		cout<<"zainstalowano"<<endl;
	}
	else
	{
		cout<<"To nie ta komenda! Sproboj ponownie";

	}
	}
	return 0;
}
