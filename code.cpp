
#include <iostream>
using namespace std;

int main()
{
	int Days; cin >> Days;//Input
	
	//Process
	int years = Days / 365;
	Days%=365;
	int months = Days / 30;
	Days %= 30;

	//Output
	cout << years << " years\n";
	cout << months<< " months\n";
	cout << Days <<" days\n";

	return 0;
}
