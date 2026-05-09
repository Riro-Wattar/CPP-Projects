#include <iostream>
#include <string>
using namespace std;
enum enWeekDay { Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
enum Months { January = 1, February, March, April, May, June, July, August, September, October, November, December };

void ReadGrade(int& grade)
{
	cout << "Please entre the grade:";
	cin >> grade;

	if (grade >= 90)
		cout << "A" << endl;
	else if (grade >= 80)
		cout << "B" << endl;
	else if (grade >= 70)
		cout << "C" << endl;
	else if (grade >= 60)
		cout << "D" << endl;
	else
		cout << "F" << endl;




}
void ReadTotalSeals(double& totalSeals)
{

	cout << "Please entre the total seals:\n";
	cin >> totalSeals;
	double Percenteg, TotalComisson;

	if (totalSeals >= 1000000)
		Percenteg = 0.01;
	else if (totalSeals >= 500000)
		Percenteg = 0.02;
	else if (totalSeals >= 100000)
		Percenteg = 0.03;
	else if (totalSeals >= 50000)
		Percenteg = 0.05;

	TotalComisson = Percenteg * totalSeals;
	cout << " total comission is:" << TotalComisson << endl;
}
void ReadNumbers(int& num1, int& num2, string& optype)
{






	cout << "Please entre the first number:\n";
	cin >> num1;
	cout << "Please entre the second number:\n";
	cin >> num2;
	cout << "Please entre the operation type:\n";
	cin >> optype;
	switch (optype[0])
	{
	case '+':	
		cout << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 * num2 << endl;
		break;
	case '/':	
		cout << num1 / num2 << endl;
		break;
	default:
		cout << "Wrong operation type." << endl;
	}
}
void ReadDay(int& day)
{
	cout << "******************************************\n";
	cout << "WEAK DAYS:\n1:Sunday\n2:Monday\n3:Tuesday\n4:Wednesday\n5:Thursday\n6:Friday\n7:Saturday\n";
	cout << "******************************************" << endl;

	cout << "Please entre the Number of the day:\n";
	cin >> day;
	


	switch (day) 
	{
	case 1:
		cout << "it is Sunday" << endl;
		break;
	case 2:
		cout << "it is Monday" << endl;
		break;
	case 3:
		cout << "it is Tuesday" << endl;
		break;
	case 4:
		cout << "it is Wednesday" << endl;
		break;
	case 5:
		cout << "it is Thursday" << endl;
		break;
	case 6:
		cout << "it is Friday" << endl;
		break;
	case 7:
		cout << "it is Saturday" << endl;
		break;
	default:
		cout << "Wrong day number." << endl;
	}
}

enWeekDay ReadWeekDay()
{

	int wd;
	cin >> wd;
	return (enWeekDay)wd;
}

	void ReadMonth(int& month)
	{
		cout << "Please entre the month:\n";
		cin >> month;




		switch (month)
		{
		case 1:
			cout << "it is January" << endl;
			break;
		case 2:
			cout << "it is February" << endl;
			break;
		case 3:
			cout << "it is March" << endl;
			break;
		case 4:
			cout << "it is April" << endl;
			break;
		case 5:
			cout << "it is May" << endl;
			break;
		case 6:
			cout << "it is June" << endl;
			break;
		case 7:
			cout << "it is July" << endl;
			break;
					case 8:
		    cout << "it is August" << endl;
		    break;
		case 9:
			cout << "it is September" << endl;
		    break;
		case 10:
			cout << "it is October" << endl;
		    break;
		case 11:
			cout << "it is November" << endl;
	    	break;
		case 12:
			cout << "it is December" << endl;
			break;
			defult :
			cout << "Wrong month number." << endl;


		}
	}
int main()
{
	int grade, day, month, num1, num2;
	double totalSeals;

	string optype;
	
	ReadDay(day);

	return 0;
}












