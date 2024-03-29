#include <iostream>
#include <memory>

using namespace std;
/*
void process(unique_ptr<int> ptr){
    cout << "Processing " << *ptr << endl;
}*/
enum captain{Avi, sid, Robbi, Sami, JAke};
enum Supercars{Venom = 301,Carolla = 268,Bugatti = 500,Roadstar = 250};

int main()
{
    captain cap=Avi;
    if(cap == Avi){
        cout << "our captain is Avi,and his value is : "<<Avi<<endl;

    }else{
        cout<<"He is not our captain : "<<endl;
    }
    Supercars speed1;
    Supercars speed2;

    speed1 = Bugatti;
    speed2 = Venom;

    if (speed1 < speed2)
    {
        cout <<"Is a win for the Venom, with the speed of : "<<Venom<<endl;

    }else{
        cout<<"It's a win for the Bugatti, with speed of : "<<Bugatti << speed1<<endl;

    }
    
/*
    unique_ptr<int> ptr(new int(42));
    process(move(ptr));*/

    enum color{red, yelow, blue, green, pink};
    
    color select= yelow;

    switch(pink){
        case red:
            cout<<"It is red";
            break;
        case yelow:
            cout<<"it is yellow";
            break;

        case blue:
        cout<<"it is blue";
            break;
        
        case green:
            cout<<"it is green";
            break;

        default:
             cout<<"color not found";

            

    }
}