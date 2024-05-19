#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor called" << endl;
    }
    virtual ~Base() {
        cout << "Base destructor called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor called" << endl;
    }
    ~Derived() {
        cout << "Derived destructor called" << endl;
    }
};

int main() {
    Base* ptr = new Derived(); // Pointer to Derived class assigned to Base class pointer
    delete ptr; // Deleting through base class pointer
    return 0;
}
