#include<iostream>
#include<type_traits>
#include<utility>
using namespace std;

void func(int&& a) {
    cout << is_rvalue_reference<decltype(a)>::value << endl;
}


template <typename T, typename U>
auto minimum(T&& a, U&& b) 
{   
    // func(a);
    cout << is_rvalue_reference<decltype(a)>::value << endl;
    // a = 69;
    // decltype(a<b?a:b) test;
    // cout << "inside min: " << typeid(test).name() << endl;
    return a < b ? a : b;

}


int main () {
    int n = 1;
    long m = 2;
    auto a = minimum(5,6);
    cout << n << " " << typeid(a).name() << endl;
}    