#include <cstdio>
#include <cassert>
#include <iostream>

using namespace std;

template<class...A> void func1(int a1, int a2, A...arg)
{
    cout << "Func1 in templatized " << endl;
    assert(false);
}

template<typename... T>
void func1(int a1, T... args)
{
    printf("call with(%d,%d,%d,%d,%d,%d)\n",a1, args...);
}

template<class...A> int func(A...args)
{
    int size = sizeof...(A);
    switch(size){
        case 0: func1(99,99,99,99,99,99);
        break;
        case 1: func1(99,99,args...,99,99,99);
        break;
        case 2: func1(99,99,args...,99,99);
        break;
        case 3: func1(args...,99,99,99);
        break;
        case 4: func1(99,args...,99);
        break;
        case 5: func1(99,args...);
        break;
        case 6: func1(args...);
        break;
        default:
        func1(0,0,0,0,0,0);
    }
    return size;
}

int main(void)
{
    func();
    func(1);
    func(1,2);
    func(1,2,3);
    func(1,2,3,4);
    func(1,2,3,4,5);
    func(1,2,3,4,5,6);
    func(1,2,3,4,5,6,7);
    return 0;
}