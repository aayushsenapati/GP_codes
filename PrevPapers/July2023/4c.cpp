#include <iostream>

using namespace std;

template <int N>
int isPrime(){
    for(int i = 2; i * i < N; i++){
        if(!(N%i)) return 0;
    }
    return 1;
}

int main(){
    cout << isPrime<48>() << endl;
}