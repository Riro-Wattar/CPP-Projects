
#include <iostream>
#include <string>

using namespace std;
enum status { Single, Married };
enum Gender { Male = 0, Female = 1 };
enum Color { Green = 1, Blue = 2, Red = 3 };

struct stAddress
{
	string Street;
	string POBOX;



};



struct stowner
{
	string FullName;
	string PhoneNumber;
	stAddress Address;



};

struct Car
{
	string Brand;
	string Model;
	int Year;
	stowner Owner;
	stAddress Address;


};

int main() 
{
	
	short MarridInput, GenderInput, ColorInput;


	string Name;
	cout << "plaese enter your Name?";cin >> Name;cout << endl;
	short Age;
	cout << "please enter your Age?"; cin >> Age;cout << endl;
	string City;
	cout << "please enter your City?";cin >> City;cout << endl;
	string Country;
	cout << "please enter your Country?";cin >> Country;cout << endl;
	float MonthlySalary;
	cout << "please enter your Monthly Salary?";cin >> MonthlySalary;cout << endl;
	float YearlySalary;
	cout << "your Yearly Salary Is:";cout << MonthlySalary*12  ;cout << endl;
	cout << "please enter your Gender? ( 0=Male / 1=Female)? ";
	Gender Mygender;
	cin >> GenderInput;

	Mygender = (Gender)GenderInput;
	cout << endl;

	cout << "Are You Married? (0 for Single / 1 for Married)? ";
	status Mystatus;
	
	cin >> MarridInput;

	Mystatus = (status)MarridInput;
	cout << endl;
	cout << "Your favorete color:";
	Color Mycolor;
	
	 cin >> ColorInput;
	 Mycolor = (Color)ColorInput;
	cout << endl;


		Car Mycar;
		cout << "Please enter your car Brand:";
		cin >> Mycar.Brand; cout << endl;
		cout << "Please enter your car Model:";
		cin >> Mycar.Model;cout << endl;
		cout << "Please enter your car Year:";
		cin >> Mycar.Year;cout << endl;
		cout << "Pleas enter your FullName:";
		getline(cin, Mycar.Owner.FullName);cout << endl;
		cout << "Please enter your PhoneNumber:";
		cin >> Mycar.Owner.PhoneNumber;cout << endl;
		cout << "Please enter your Street Name:";
		cin >> Mycar.Address.Street; cout << endl;
				cout << "Please enter POBOX:";
				cin >> Mycar.Address.POBOX;
				cout << endl;
	cout << " ******************************* " << endl;
	cout << " ******************************* "<< endl;
	cout << "Name:" << Name<< endl;
	cout << "City:" << City<< endl;
	cout << "country:" << Country<< endl;
	cout << "MonthlySalary:" << MonthlySalary<< endl;
	cout << "YearlySalary:" << MonthlySalary * 12 << endl;
	cout << "Gender:" << Mygender << endl;
	cout << "Married:" << Mystatus<< endl;

	cout << " Car Brand:" << Mycar.Brand << endl;
		cout << "Car Model:" << Mycar.Model << endl;
	cout << "Car Year:" << Mycar.Year << endl;
	cout << "Full Name:" << Mycar.Owner.FullName << endl;

	cout << " Phone Number:" << Mycar.Owner.PhoneNumber << endl;

	cout << "Street:" << Mycar.Address.Street << endl;

	cout << "POBOX:" << Mycar.Address.POBOX << endl;

	cout << "Your favorete color:" << Mycolor << endl;
	cout << "*******************************" << endl;
	cout << "*******************************" << endl;
	return 0;

}
















