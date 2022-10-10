#include<iostream>
using namespace std;

class A {
    public:

    void func() {
        cout << " I am A" << endl;
    }
};

class B {
    public:

    void func() {
        cout << " I am B" << endl;
    }
};

class C: public A, public B {


};

int main() {

    C obj;
    //obj.func();  ambiguity bcuz it has 2 func. of same name.

    obj.A::func() ;
    obj.B::func();

    return 0;
}
