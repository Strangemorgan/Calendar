#include <iostream>
#include <stdexcept>

using namespace std;

double divide(int numerator,int denominator){
    if(denominator == 0){
        throw invalid_argument("Divide b zero error");
    }
    return static_cast<double>(numerator)/denominator;
}


class Enemy{
public:
    virtual void attack(){
   
    }

};
class Ninja:public Enemy{
public:
    void attack() override{
 cout << "i am a ninja, ninja  chop! -" << endl;
    }

};
class Monster:public Enemy{
public:
    void attack() {
cout << "Monster must eat you -" << endl;
    }

};


int main(){
Ninja n;
Monster m;

n.attack();
m.attack();

Enemy *enemy1 = &n;
Enemy *enemy2 = &m;
enemy1->attack();
enemy2->attack();

return 0;
}