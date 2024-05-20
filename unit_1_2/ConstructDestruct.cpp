#include <iostream>

using namespace std;
class MyClass {
private:
    int value;

public:
    // Constructor declaration
    MyClass(int val);
    MyClass();

    // Member function to print the value
    void printValue() const;
};

class ChildClass : public MyClass{
    public:
    ChildClass(int val) : MyClass(val){
        cout << "Inside ChildClass" << endl;
    }
    
    
};

MyClass::MyClass() {
    cout << "Inside default" << endl;
}

// Constructor definition outside the class
MyClass::MyClass(int val) : MyClass(){ 
    value = val;
    std::cout << "Constructor called with value: " << value << std::endl;
}



// Member function definition outside the class
void MyClass::printValue() const {
    std::cout << "Value: " << value << std::endl;
}

int main() {
    ChildClass obj(42);  // Calls the constructor
    obj.printValue(); // Calls the member function

    return 0;
}