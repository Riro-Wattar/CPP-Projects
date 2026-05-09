

#include <iostream>
using namespace std;
int main()
{
	bool Result;
	cout << "****************************************************************************" << endl;
	Result = (12 >= 12);
	cout << " (12 >= 12)----->" << Result << endl;
	Result = (12 > 7);
	cout << " (12 >7)----->" << Result << endl;
	Result = (8 < 6);
	cout << " (8<6)----->" << Result << endl;
	Result = (8 == 8);
	cout << " (8=8)----->" << Result << endl;
	Result = (12 <= 12);
	cout << " (12<=12)----->" << Result << endl;
	Result = (7 == 5);
	cout << " (7=5)----->" << Result << endl;
	Result = !(12 >= 12);
	cout << " !(12 >= 12)----->" << Result << endl;
	Result = !(12 < 7);
	cout << " !(12 > 7)----->" << Result << endl;
	Result = !(8 < 6);
	cout << " !(8 < 6)----->" << Result << endl;
	Result = !(8 == 8);
	cout << " !(8 = 8 )----->" << Result << endl;
	Result = !(12 <= 12);
	cout << " !(12 <= 12)----->" << Result << endl;
	Result = !(7 == 5);
	cout << " !(7= 5)----->" << Result << endl;
	Result = (7 == 7) && (7 > 5);
	cout << "(7 = 7) && (7 > 5) ----->" << Result << endl;
	Result=  (7 == 7) && (7 <5);
	cout << "(7 = 7) && (7 < 5) ----->" << Result << endl;
	Result = (7 == 7) || (7 < 5);
	cout << "(7 = 7) || (7 < 5) ----->" << Result << endl;
	Result = ! (7 == 7) && (7 > 5);
	cout << "! (7 = 7) && (7 > 5) ----->" << Result << endl;
	Result = (7 == 7) && ! (7 < 5);
	cout << "(7 == 7) && ! (7 < 5 ----->" << Result << endl;
	Result = (5 > 6 && 7 == 7) || (1 || 0);
	cout << "(5 > 6 && 7 == 7) || (1 || 0) ----->" << Result << endl;
	Result = !(5 > 6 && 7 == 7) || (1 || 0);
	cout << "!(5 > 6 && 7 == 7) || (1 || 0) ----->" << Result << endl;
	Result = !(5 > 6 && 7 == 7) || ! (1 || 0);
	cout << "!(5 > 6 && 7 == 7) || ! (1 || 0) ----->" << Result << endl;
	Result = !(5 > 6 && 7 == 7) && !(1 || 0);
	cout << "!(5 > 6 && 7 == 7) && ! (1 || 0) ----->" << Result << endl;
	Result = ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && true;
	cout << "((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && true ----->" << Result << endl;
	Result = ((5 > 6) && !(7 <= 8) && (8 > 1) || (4 <= 3)) || true;
	cout << "(( 5 > 6) && !(7 <= 8) && (8 > 1) || (4 <= 3)) || true ----->" << Result << endl;
	cout << "****************************************************************************" << endl;












}
