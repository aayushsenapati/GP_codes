#include <iostream>
using namespace std;
template <typename T>
int CountOccurence (T element, T* arr, int size ){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == element) count++;
    }
    return count;
}

int main(){
    char characterArray[5] = {'a', 'b', 'a', 'a', 'e'};
    int integerArray[5] = {1,2,3,2,5};
    cout << "Char Array : " << CountOccurence('a', characterArray, 5) << endl;
    cout << "Int Array : " << CountOccurence(2, integerArray, 5) << endl;
}