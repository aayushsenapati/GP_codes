#include <iostream>
#include <tuple>


template<typename... Ts>
using intTuple = std::tuple<int,Ts...>;

int main() {

intTuple<double,int> tuple1(42, 3.14,3);
}