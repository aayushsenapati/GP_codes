#include <iostream>
using namespace std;


template <typename T>
void printArr(T* arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
}

int main(){
    int arr1[] = {1,2,3,4,5};
    printArr(arr1, 5);

    char arr2[] = {'a', 'b', 'c', 'd', 'e'};
    printArr(arr2, 5);
    return 0;
}
