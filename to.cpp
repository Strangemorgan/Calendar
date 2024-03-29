#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    ofstream object("doc.txt");

    if(!object.is_open()){
        cerr << "Error opening the file!" << endl;
        return 1;
    }
//Write data to the file

    object << "Hello,World\n";
    object << "This is a file";
    object.close();

    ifstream infile("doc.txt");

    if(!infile.is_open()){
        cerr << "Error file not open" << endl;
        return 1;
    }

    string line;
    while(getline(infile,line)){
        cout << line << endl;
    }
    infile.close();
    int num;
    string name;
    double Werid;

    while(cin >>num >> name >> Werid ){
        cout << "The data" << endl;
        object << num << name << Werid;
    }
}