#include <iostream>

using namespace std;

template <typename... T>
void printl(T... args)
{

(..., (std::cout << args)) << '\n';

}
template <typename... T>
void printr(T... args)
{

((std::cout << args), ...) << '\n';

}


int main(){
    printl(1,2,3,4);
    printr(1,2,3,4);
    return 0;

}