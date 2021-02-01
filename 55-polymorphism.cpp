#include <iostream>
using namespace std;
// different animal have different ways to attack people
class Enemy{
    protected:
    int attackPower;
    public:
    void setAttackPower(int a){
        attackPower=a;
    }
};

class Ninjia:public Enemy{
    public:
        void attack(){
            cout<<"I am a ninja, ninjia chop! -" << attackPower << endl;
        }
};
class Monster : public Enemy
{
public:
    void attack()
    {
        cout << "Monster must eat you !!!! -" << attackPower << endl;
    }
};

int main()
{
    Ninjia n;
    Monster m;
    // two pointers 
    Enemy *enemy1 = &n; // ninja type are a type of enemy
    // *pointer = &address
    Enemy *enemy2 = &m;
    enemy1->setAttackPower(29);
    enemy2->setAttackPower(99);
    // 经典错误 use virtual in 56 to solve this problems
    // base class don't have attack
    // enemy1.attack();
    n.attack();
    m.attack();
}