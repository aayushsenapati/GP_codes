#include <cassert>
#include <iostream>

using namespace std;

// an assertion is a statement used to state or assert that the expression 
// must be true
template<class...A, class...B> void func(int sz1, A...arg1, int sz2, B...arg2)  
{
   assert( sizeof...(arg1) == sz1);
   assert( sizeof...(arg2) == sz2);
   cout << "Success first" << endl;
   assert (sizeof...(A) == sizeof...(arg1));
   cout << "Success second" << endl;

   cout << "SIze of args is arg1:" << sizeof...(arg1) << ", arg2:" << sizeof...(arg2) << endl;
}

int main(void)
{
   //A:(int, int, int), B:(int, int, int, int, int) 
   func<int,int,int>(3,1,3,3,5,1,2,3,4,5);

   //A: empty, B:(int, int, int, int, int)
   func<float>(1,1,4,2,3,4,5);
   return 0;
}