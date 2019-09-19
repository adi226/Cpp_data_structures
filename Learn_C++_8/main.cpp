#include <iostream>

using namespace std;
//polymorphism - virtual function
//eg,use same function and have different outcomes
//every enemy has specific attack function, make attack virtual, it means that we are going to use that function polymorphically. it means look in specific class when using that function
//when we have virtual function we have option to overwrite it in the derived classes
//Pure virtual function - it has no body
//virtual void attack()=0; if pure virtual function then derived classes need to overwrite it
//regular virtual function
//abstract class - a class with pure virtual function in it
//templates
class Enemy{
public:
    virtual void attack(){
        cout<<"i am the enemy class";
    }
/*protected:
    int attackpower;
public:
    void setattackpower(int a){
        attackpower=a;
    }*/
};

class Ninja:public Enemy{
/*public:
    void attack()
    {
        cout<<"i am ninja, ninja chop - "<<attackpower<<endl;
    }*/
public:
    void attack(){
        cout<<"ninja attack"<<endl;
    }
};

class monster:public Enemy{
/*public:
    void attack()
    {
        cout<<"i am monster, eat you - "<<attackpower<<endl;
    }*/
public:
    void attack(){
        cout<<"monster attack"<<endl;
    }
};

int main()
{
   /* Ninja n;
    monster m;
    Enemy *enemy1 = &n;//since ninja is a type of enemy this is valid
    Enemy *enemy2 = &m;//anything an enemy can do, monster can do
   // n.setattackpower(29);
   // m.setattackpower(99);
    enemy1->setattackpower(29);
    enemy2->setattackpower(99);

    //enemy1.attack();will give error
    //enemy2.attack();will give errors

    n.attack();
    m.attack();
    */
    Ninja n;
    monster m;
    Enemy* enemy1 = &n;
    Enemy* enemy2 = &m;
    enemy1->attack();
    enemy2->attack();//same function different results
}
