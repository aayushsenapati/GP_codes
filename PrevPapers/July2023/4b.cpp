#include <iostream>

using namespace std;

template <int N>
int factorial(){
    return factorial<N-1>() * N;

}

template <>
int factorial<0>(){
    return 1;
}

int main(){
    cout << factorial<10>() << endl;
}