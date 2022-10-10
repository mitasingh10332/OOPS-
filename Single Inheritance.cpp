#include<iostream>
using namespace std;


class Animal {

    public:
    int age;
    int weight;


    public:
    void speak() {
        cout << "Speaking " << endl;
    }

    int setage(int age)
    {
        return this->age=age;

    }
};

class Dog: public Animal {
public:
    void bark(){
        cout<<"Barking"<<endl;
    }

};


int main() {

    Dog d;
    d.speak();
    d.setage(20);
    cout << d.age << endl;


    return 0;
}
