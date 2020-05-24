#include <iostream>

using namespace std;

//Example of polymorphism and virtual functions

class Enemy{
    protected:
        int attackPower;
    public:
    void setAttackPower(int a){
        attackPower = a;
    }
    virtual void attack(){
        cout << "Emeny! - " << attackPower << endl;
    }
    virtual void dodge() = 0; //pure virtual function
    
};

class Ninja: public Enemy{
    public:
    void attack(){
        cout << "Ninja! - " << attackPower << endl;
    }
    void dodge(){}

};

class Monster: public Enemy{
    public:
    void attack(){
        cout << "Monster! - " << attackPower << endl;
    }
    void dodge(){}
};



int main(){

    Ninja n;
    Monster m;
    //Enemy e;

    Enemy *e1 = &n;
    Enemy *e2 = &m;
    //Enemy *e3 = &e;

    e1->setAttackPower(20);
    e2->setAttackPower(80);
    //e3->setAttackPower(100);

    n.attack();
    m.attack();
    //e.attack();
    e1->attack();
    e2->attack();
    //e3->attack();

    return 0;
}