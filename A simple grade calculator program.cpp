#include <iostream>
#include <string>
using namespace std;
void ReadMarks(float& mark1, float& mark2,float& mark3)
{
	cout << "Please Enter mark1: ";
	cin >> mark1;
	cout << "Please Enter mark2: ";
	cin >> mark2;
	cout << "Please Enter mark3: ";
	cin >> mark3;
}
float AvgFunction(float mark1, float mark2, float mark3)
{
	return (mark1 + mark2 + mark3) / 3;
}
int main()
{
	float Mark1, Mark2, Mark3, Avg;
	ReadMarks(Mark1, Mark2, Mark3);
	Avg = AvgFunction(Mark1, Mark2, Mark3);
	if (Avg >= 50)
	{
		cout << "Pass" << endl;
	}
	else
	{
		cout << "Fail" << endl;
	}
}