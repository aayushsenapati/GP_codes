#include <iostream>

using namespace std;
int main() {
    cout << decltype([](int a, double b){
        return a < b ? a : b;
    }) << endl;
}