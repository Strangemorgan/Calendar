#include <iostream>

using namespace std;

template <typename T>

T pmax(T a, T b)
{
    return (a > b) ? a : b;
}
template <typename T,typename U>

T smaller(T a,U b){
    return (a < b) ? a : b; 
}

    int main()
{
    int maxInt = pmax(5, 10);
    double maxDouble = pmax(3.5, 7.2);
    char maxChar = pmax('a', 'b');

    cout << "Max integer: " << maxInt << endl;
    cout << "Max Double: " << maxDouble << endl;
    cout << "Max char: " << maxChar << endl;

    int x = 89;
    double y = 56.75;
    cout << smaller(x, y) << endl;

    try{
        int momAge = 10;
        int sonAge = 34;

        if(sonAge > momAge)
            throw 99;
    }catch(...){
        cout << "son can note older than mom " << endl;
    }
}
