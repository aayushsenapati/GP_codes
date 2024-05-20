#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class MyStack{
    private:

    public:
    std::vector<T> arr;

    void push(T val){
        arr.push_back(val);
    }
    T peek(){
        return arr[arr.size() - 1];
    };
    T pop(){
     T temp = peek();
     arr.pop_back();
     return temp;
    
    };
};


int main(){

    MyStack<int> stack;
    stack.push(5);
    stack.push(1);
    stack.push(2);
    cout << stack.peek();
    cout << " " << stack.pop();
    cout << " " << stack.peek();

    cout << "\nCharacter " << endl;
    MyStack<char> charstack;
    charstack.push('a');
    charstack.push('b');
    charstack.push('c');
    cout << " " << charstack.pop() << endl;
    cout << " " << charstack.peek() << endl;
}