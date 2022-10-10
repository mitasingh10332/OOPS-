#include<iostream>
using namespace std;


class Animal {
    public:
    void speak() {
        cout << "Speaking "<< endl;
    }
};

class Dog: public Animal {

    public:
    void speak() {
        cout << "Barking " << endl;
    }


};



int main() {

    Dog obj;
    obj.speak(); // it will print baking

    Animal obj1;
    obj1.speak(); // it will print speaking


    return 0;
}
