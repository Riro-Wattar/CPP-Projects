
#include <iostream>
#include <string>
using namespace std;

void ATMReaderFunctionWhile(int& PIN, int PinCode, int Balance)
{
	cout << "Please enter Your ATM Pin Code:\n";
	cin >> PIN;

	int attempts = 1;
	while (PIN != PinCode && attempts < 3)
	{
		cout << "Wrong Password. Please try again:\n";
		cin >> PIN;
		attempts++;
	}

	if (PIN == PinCode)
	{
		cout << "Your Balance is: " << Balance << endl;
	}
	else
	{
		cout << "Your card has been locked!! Please call support." << endl;
	}
}


int main()
{
	int PIN = 0;
	int PinCode = 1234;
	int Balance = 7500;
	return 0;
}
