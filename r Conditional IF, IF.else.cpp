
#include <iostream>
#include <string>
using namespace std;

void Read_Age(short& Age)
{

	cout << "please enter age:" << endl;
	cin >> Age;
}

void Read_Driver_License(bool& Driver_License)
{
	cout << "please print 1 if You has driver license and 0 if You hasn't:" << endl;
	cin >> Driver_License;
}
int main()
{
	short Age;
	bool DriverLicense;

	Read_Age(Age);
	Read_Driver_License(DriverLicense);

	if (Age >= 21 && DriverLicense == 1)
	{
		cout << "Hierd" << endl;
	}

	else
	{
		cout << "Rejected" << endl;
	};
	return 0;
}