#include <iostream>
#include <string>
using namespace std;

enum enDepartment { IT = 0, HR = 1, Sales = 2 };
enum enCity { Riyadh = 0, Jeddah = 1, Dammam = 2 };

struct stContact
{
    string email;
    string PhoneNumber;
};

struct stSalary
{
    float MainSalary;
    float Bonus;
};

struct stEmployee
{
    string Name;
    float Age;

    stContact Contact;
    stSalary Salary;

    enDepartment Department;
    enCity City;
};

void ReadEmployeeInfo(stEmployee& Employee1)
{
    short DeptInput, CityInput; 

    cout << "Please enter Your Name: ";
    cin >> Employee1.Name;

    cout << "Please enter Your Age: ";
    cin >> Employee1.Age;

    cout << "Please enter Your Email: ";
    cin >> Employee1.Contact.email;

    cout << "Please enter Your Phone Number: ";
    cin >> Employee1.Contact.PhoneNumber; 

    cout << "Please enter Your Main Salary: ";
    cin >> Employee1.Salary.MainSalary;

    cout << "Please enter Your Bonus: ";
    cin >> Employee1.Salary.Bonus;

    cout << "Please enter Your Department (0=IT, 1=HR, 2=Sales): ";
    cin >> DeptInput;
    Employee1.Department = (enDepartment)DeptInput;

    cout << "Please enter Your City (0=Riyadh, 1=Jeddah, 2=Dammam): ";
    cin >> CityInput;
    Employee1.City = (enCity)CityInput;
}

void PrintEmployeeInfo(stEmployee Employee1)
{
    cout << "\n************************************************\n";
    cout << "              YOUR INFORMATION                  \n";
    cout << "************************************************\n";
    cout << "Name: " << Employee1.Name << endl;
    cout << "Age: " << Employee1.Age << endl;
    cout << "Email: " << Employee1.Contact.email << endl;
    cout << "Phone Number: " << Employee1.Contact.PhoneNumber << endl;
    cout << "Main Salary: " << Employee1.Salary.MainSalary << endl;
    cout << "Bonus: " << Employee1.Salary.Bonus << endl;

    cout << "Total Salary: " << Employee1.Salary.MainSalary + Employee1.Salary.Bonus << endl;

    cout << "Department (0=IT, 1=HR, 2=Sales): " << Employee1.Department << endl;
    cout << "City (0=Riyadh, 1=Jeddah, 2=Dammam): " << Employee1.City << endl;
    cout << "************************************************\n";

    cout << "\n************************************************\n";
    cout << "              YOUR INFORMATION                  \n";
    cout << "************************************************\n";
}

int main()
{
    stEmployee Employee1;

    ReadEmployeeInfo(Employee1);
    PrintEmployeeInfo(Employee1);

    return 0;
}