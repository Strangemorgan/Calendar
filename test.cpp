#include <iostream>
#include <stdexcept>

using namespace std;

class Enemy{
   protected:
       int attackPower;
   public:
       void setAttactPower(int a){
       attackPower = a;
}
};

class Ninja:public Enemy{
    public:
        void attack(){
            cout << "i am a ninja, ninja  chop! -" << attackPower << endl;
    }
};
class Monster:public Enemy{
    public:
        void attack()
        {
        cout << "Monster must eat you -" << attackPower << endl;
        }
};

int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1->setAttactPower(29);
    enemy2->setAttactPower(20);
    n.attack();
    m.attack();
    m.attack();

    try
    {
        int number;

        cout << "Enter a number: ";
        cin >> number;

        if (cin.fail())
        {
            throw runtime_error("Invalid input: Not a number");
        }
        cout << "YOu  entered: " << number << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    


    return 0;
}