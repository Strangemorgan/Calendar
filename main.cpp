#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream Text("text.txt");

    int number;
    double pec;
    string name;

    while( cin >> number >> pec >> name){
        Text << number  <<'  ' << pec <<'  ' << name << endl;
    }

    Text.close();
}