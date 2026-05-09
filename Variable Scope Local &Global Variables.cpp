

#include <iostream>
#include <string>
using namespace std;

int X = 700;



void MyFunction()
{
    int X;
    cout << "Please enter X " << endl;
    cin >> X;
    cout << "The value Of X inside function is :" << X << endl;
}



int main()
{
    int X=20;
    MyFunction();

    cout << "The Local value Of X inside main is :" << X << endl;
   


    cout << "The global value of x inside main is:" << ::X << endl;


    return 0;
}
