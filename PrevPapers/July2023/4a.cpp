#include <iostream>

using namespace std;


template<int n> requires (n<2)
int fib(){ return 1; }

template <int n>
int fib() {
    return fib<n-1>() + fib<n-2>();
}

int main() {
    cout << fib<5>() << endl;
}
