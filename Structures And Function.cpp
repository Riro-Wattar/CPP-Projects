#include <iostream>
#include <string>
using namespace std;

enum enGender { Male = 0, Female = 1 };
enum enStatus { Single = 0, Married = 1 };

struct stAddress {
	string Street;
	string POBOX;
};

struct stCar {
	string Brand;
	string Model;
	int Year;
};

struct stPerson {
	string Name;
	short Age;
	float MonthlySalary;
	enGender Gender;
	enStatus Status;
	stAddress Address;
	stCar Car;
};


void ReadInfo(stPerson& Person)
{
	short GenderInput, StatusInput;
	cout << "\n--- Please Enter Your Information ---\n";

	cout << "Name (One word): ";
	cin >> Person.Name;
	cout << "Age: ";
	cin >> Person.Age;
	cout << "Monthly Salary: ";
	cin >> Person.MonthlySalary;

	cout << "Gender (0=Male / 1=Female): ";
	cin >> GenderInput;
	Person.Gender = (enGender)GenderInput;

	cout << "Status (0=Single / 1=Married): ";
	cin >> StatusInput;
	Person.Status = (enStatus)StatusInput;

	cout << "Street Name (One word): ";
	cin >> Person.Address.Street;
	cout << "POBOX: ";
	cin >> Person.Address.POBOX;

	cout << "Car Brand: ";
	cin >> Person.Car.Brand;
	cout << "Car Model: ";
	cin >> Person.Car.Model;
	cout << "Car Year: ";
	cin >> Person.Car.Year;
	cout << "-------------------------------------\n";
}


void PrintInfo(stPerson Person)
{
	cout << "\n***********************************\n";
	cout << "        FULL INFORMATION           \n";
	cout << "***********************************\n";
	cout << "Name: " << Person.Name << endl;
	cout << "Age: " << Person.Age << endl;
	cout << "Monthly Salary: " << Person.MonthlySalary << endl;
	cout << "Yearly Salary: " << Person.MonthlySalary * 12 << endl;
	cout << "Gender: " << (Person.Gender == Male ? "Male" : "Female") << endl;
	cout << "Status: " << (Person.Status == Single ? "Single" : "Married") << endl;
	cout << "Street: " << Person.Address.Street << endl;
	cout << "POBOX: " << Person.Address.POBOX << endl;
	cout << "Car Brand: " << Person.Car.Brand << endl;
	cout << "Car Model: " << Person.Car.Model << endl;
	cout << "Car Year: " << Person.Car.Year << endl;
}

void ReadPersonInfo(stPerson Person[100], int& count)
{
	cout << "How many persons do you want to enter (max 100): ";
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cout << "\n[ Entering Data for Person " << i + 1 << " ]";
		ReadInfo(Person[i]); 
	}
}

void PrintPersonInfo(stPerson Person[100], int count)
{
	for (int i = 0; i < count; i++)
	{
		PrintInfo(Person[i]); 
	}
}

int main()
{
	stPerson Person1[100]; 
	int count;             

	
	ReadPersonInfo(Person1, count);

	
	PrintPersonInfo(Person1, count);

	return 0;
}