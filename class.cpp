#include<bits/stdc++.h>
using namespace std;
class Hero{
//properties
//by deafault these are private
public:
int health;
char level;
Hero()//constructor
{
   cout<<"Constructor called!"<<endl;
}
//parametrised 
Hero(int health)
{
   // cout<<"this->"<<this<<endl;
    this->health=health;
}

Hero(int health,char level)
{
    this->level=level;
    this->health=health;
}
//creating oqn copy constructor
Hero(Hero& temp){
//copy constructor called
    this->health=temp.health;
    this->level=temp.level;
}
void print(){
    cout<<"health: "<<this->health<<endl;
    cout<<"level:"<<this->level<<endl;
    }
//getter
int getHealth()
{
    return health;
}
char getLevel(){
    return level;
}
//setter
void setHealth(int h)
{
    health=h;
}
void setLevel(char ch)
{
    level=ch;
}
};
int main()
{
    Hero suresh(70,'C');
    suresh.print();
    //copy constructor
    Hero R(suresh);
    R.print();
    //creation of object statically
   // Hero h1(10);
    //Hero *b=new Hero;
    //dynamically
    /*
    //h1.health=70;
    //to set value
    h1.setHealth(60);
    h1.level='A';
    //cout<<"Size: "<<sizeof(h1)<<endl;
    cout<<"Health: "<<h1.getHealth()<<endl;
    cout<<"Level: "<<h1.level<<endl;
    //dynamic allocation
    Hero *b=new Hero;
    b->setHealth(70);
    b->setLevel('A');
    cout<<"Level: "<<(*b).level<<endl;
    cout<<"Health : "<<(*b).getHealth()<<endl;

     cout<<"Level: "<<b->level<<endl;
    cout<<"Health : "<<b->getHealth()<<endl; */
    //Hero temp(22,'B');
    //temp.print();
    return 0;
}