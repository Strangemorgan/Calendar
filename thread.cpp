#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T,typename U>

void swapValues(T& a,U& b){
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
class Pair{
    private:
        T first;
        T second;
    public:
        Pair(T f,T s):first(f),second(s){}
        void display()const{
            cout <<"(" << first << "," <<second<<")"<<endl;
        }

};

void ProcessInput(int value);

int main()
{
cout<<"To the world"<<endl;
    try
    {
        int divisor = 0;
        int result = 10 / divisor; // This will cause a division by zero error
        cout << "Result: " << result << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exeption caught: " << e.what() << '\n';
    }

    try{
        ProcessInput(-5);//This will throw an exception
        }catch(const exception& e){
            cerr << " Exeption caught: " << e.what() << endl;
        }

    /*
int x= 5,y= 10;
cout << "Before swapping: x= "<<x<<", y = "<<y<<endl;
swapValues(x,y);//Compiler generates swapValues<int>(x, y)
cout << "After swapping: x = "<<x<<", y = "<<y<<endl;


double a = 3.5, b = 7.2;
cout << "Before swapping: a = " << a << ", b = " << b << endl;
swapValues(a, b);//Compiler generates swapValues<int>(x, y)
cout << "After swapping: a = "<< a <<", b = "<< b <<endl;

Pair<int> intPair(5, 10);
cout << "Integer Pair: ";
intPair.display();

Pair<double> doublePair(3.5, 7.2);
cout << "Double pair: ";
doublePair.display();*/
try
{
    /* code */
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}

}
void ProcessInput(int value){
    if(value < 0){
        throw invalid_argument("Negative value are not allowed");
    }
    //Process theinput if it's valid
}
