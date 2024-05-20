#include <iostream>

using namespace std;

class MyClass {
public:
    explicit MyClass(int x) {
        cout << "Constructor called " << endl;
    }

    const MyClass& operator=(const MyClass& obj){
        cout << "Assignment operator called" << endl;
        return *this;
    }
};

int main() {
    MyClass obj1;  // Error: Implicit conversion not allowed
    obj1 = 6;
    MyClass obj2(5);   // Ok: Explicit conversion allowed
    obj1 = obj2;

    return 0;
}