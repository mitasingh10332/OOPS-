#include<iostream>
using namespace std;

class A {

    public:
    void sayHello() {
        cout << "Hello" << endl;
    }

    int sayHello(char name) {
        cout << "Hello "<<name << endl;
        return 1;
    }

    void sayHello(string name) {
        cout << "Hello " << name  << endl;
    }

};




int main() {

 A obj;
 obj.sayHello();
 obj.sayHello("mita");
 obj.sayHello('M');

    return 0;
}
