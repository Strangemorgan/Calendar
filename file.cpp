#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // open the file to the write mode
    ofstream outfile("doccument.txt");

    // check if the file is open

    if (!outfile.is_open())
    {
        cerr << "Error file not not open" << endl;
        return 1;
    }

    // write data to the file
    int intValue;
    double doubleValue;

    string stringValue;
    char choice = 'Y';
   while (choice == 'Y' || choice == 'y')
    {
        cout << "Enter an iterger: ";
        cin >> intValue;
        outfile << intValue << endl;

        cout << "Enter a double: ";
        cin >> doubleValue;
        outfile << doubleValue << endl;

        cin.ignore(); // ignore the new line character in the buffer

        cout << "Enter a string: ";
        getline(cin, stringValue);
        outfile << stringValue << endl;

        cout << "Do you want to enter more data if yes(y) or no (n): ";
        cin >> choice;
    }
    /*
    while (cin >> intValue >> doubleValue >> stringValue){
        outfile << intValue << doubleValue << stringValue;
    }*/


}