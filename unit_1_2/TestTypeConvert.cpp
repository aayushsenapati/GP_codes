#include <iostream>

template<int F>
void foo() {
    std::cout << "Value: " << F << std::endl;
}

int main() {
    // Attempting to call foo with an int value
    foo<42>(); // Error: cannot convert 'int' to 'float' in template argument

    return 0;
}