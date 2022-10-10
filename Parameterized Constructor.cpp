#include<iostream>
using namespace std;

class Hero{

//properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    //Parameterised Constructor
    Hero(int health) {
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }



    void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }


    static int random() {
        return timeToComplete ;
    }

    //Destructor
    ~Hero() {
        cout << "Destructor called" << endl;
    }

};

int Hero::timeToComplete = 5;



int main()
{
     //object created statically
    Hero ramesh(10);
    ramesh.print();

    //dynamically
    Hero *h =  new Hero(11);
    h->print();

    Hero temp(22, 'B');
    temp.print();




/*
   Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "level is  " << a.level << endl;
    cout << " health is " << a.getHealth() << endl;
    //dynamicallly
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout << "level is  " << b->level << endl;
    cout << " health is " << b->getHealth() << endl; */




 return 0;

}
