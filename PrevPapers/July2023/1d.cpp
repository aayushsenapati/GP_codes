#include <iostream>

using namespace std;

template <typename T, int SIZE>

void reverseInPlace (T(&arr)[SIZE]){

    int n = size(arr);
    for(int i = 0; i < n/2; i++){
        swap(arr[i], arr[n-i-1]);
    }
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    reverseInPlace(arr);
    for(int i : arr){
        cout << i << " ";
    }
}
