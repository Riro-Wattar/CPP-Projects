#include<iostream>
#include<string>
using namespace std;

struct stInfo
{
	string FirstName;
	string LastName;
	short Age;
	string PhonNumber;


};

void ReadInfo(stInfo &PersonsInfo)
{
	cout << "***************************************************\n";
	cout << "Please Enter Your Information:";
	cout << "***************************************************\n";
	cout << "Please Enter Your First Name:\n";
	cin >> PersonsInfo.FirstName;
	cout << "Please Enter Your Last Name:\n";
	cin >> PersonsInfo.LastName;
	cout << "Please Enter  Your Age:\n";
	cin >> PersonsInfo.Age;
	cout << "Please Enter Your PhoneNumber:\n";
	cin >> PersonsInfo.PhonNumber;
}
void PrintInfo(stInfo PersonsInfo )
{
	cout << "***************************************************\n";
	cout << " Your Information:";
	cout << "***************************************************" << endl;
	cout << "First Name:\n";
	cout << PersonsInfo.FirstName;
	cout << "Last Name:\n";
	cout << PersonsInfo.LastName;
	cout << "Age:\n";
	cout << PersonsInfo.Age;
	cout << "PhoneNumber:\n";
	cout << PersonsInfo.PhonNumber;
}
void ReadPersonsInfo(stInfo PersonsInfo[100], int &Length)
{


	cout << "How Many Persons do you want to enter? 1 to 100?\n";
	cin >> Length;


	for (int i = 0; i <= Length - 1; i++)
	{


		cout << "Please enter The Number Of  The Person " << i + 1 << endl;
		
		ReadInfo(PersonsInfo[i]);

	}


	}
void PrintPersonsInfo(stInfo PersonsInfo[100],int Length)
{
	for (int i = 0; i < Length; i++)
	{

		PrintInfo(PersonsInfo[i]);

	}
	
}


int main()

{
	stInfo PersonsInfo[100];
	int Length=0;

	ReadPersonsInfo(PersonsInfo, Length);
	PrintPersonsInfo(PersonsInfo, Length);

}







