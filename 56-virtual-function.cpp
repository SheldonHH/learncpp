#include <iostream>
using namespace std;

class Enemy{
    public: 
        virtual void attack(){};

};

class Ninjia:public Enemy{
    void attack()
    {
        cout << "Ninjia attack!" << endl;
    }
};
class Monster : public Enemy
{
    public:
        void attack(){
            cout << "monster attack!" << endl;
        }
};

int main()
{
    Ninjia n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    // enemy1->attack()
    enemy1->attack();
    enemy2->attack();

}