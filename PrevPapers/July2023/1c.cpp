#include <iostream>
#include <concepts>
using namespace std;


template <typename T> requires is_integral_v<T> || floating_point<T> 
T CountOccurence (T* arr, int size ){
    T sum = 0;
    for(int i = 0; i < size; i+=2){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    float arr[5] = {1.2,2.0,3.0,4.0,5.0};
    cout << CountOccurence(arr, 5) << endl;
}