#include<iostream>
#include "hero.cpp"
using namespace std;


//creating clss
class Hero{

    private:
    int health;
    //properties
    public: 
    //int health;
    char level;

    //constructor--
    Hero(){
        cout<<"constructor called"<<endl;
    }

    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health=h;
    }
    char getlevel(){
        return health;
    }
    void setlevel(char ch){
        level=ch;
    }
};
int main(){
    //creating object
    Hero h1;// constructor Hero will be called
    
    //h1.health=70;
    //h1.level='A';

    //cout<<"size: "<<sizeof(h1)<<endl;


    //cout<<"health is: "<<h1.health;
    h1.setlevel('k');
    h1.sethealth(70);
    cout<<"level is :"<<h1.level<<endl;

    //cout<<"health before: "<<h1.gethealth()<<endl;
    cout<<"health after:"<<h1.gethealth()<<endl;


    //dynamically----
    Hero *b=new Hero;// constructor Hero will be called
    b->setlevel('A');
    b->sethealth(80);

    cout<<"dynamically level:"<<(*b).level<<endl;
    cout<<"dynamicall health is:"<<b->gethealth()<<endl;

    //object created statically
    Hero ramesh; //// constructor Hero will be called

    //dynamically--
    Hero *h=new Hero;// constructor Hero will be called


}