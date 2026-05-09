#include <iostream>
#include <string>
using namespace std;
struct stbook
{
    string title;
    string author;
    int Year;
};
void ReadLibraryBooks(stbook Books[100], int& count)
{
    cout << "How many books do you want to enter? \n";
    for (int i = 0; i < count; i++)
    {
        cout << "Enter book " << i + 1 << " title: ";
        getline(cin, Books[i].title);
        cout << "Enter book " << i + 1 << " author: ";
        getline(cin, Books[i].author);
        cout << "Enter book " << i + 1 << " year: ";
        cin >> Books[i].Year;
        cin.ignore(); // To ignore the newline character after reading the year
    }
}

	void PrintLibraryBooks(stbook Books[100], int count)
    {
        cout << "Library Books:\n";
        for (int i = 0; i < count; i++)
        {
            cout << "Book " << i + 1 << ": " << Books[i].title << " by " << Books[i].author << " (" << Books[i].Year << ")\n";
        }
    }









int main()
{
	stbook Books[100];
    int count;
    ReadLibraryBooks(Books, count);
    PrintLibraryBooks(Books, count);
	return 0;
}
