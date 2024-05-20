// Program to demonstrate the use of arrays in C++
#include <iostream>
#include <array>
#include <vector>
using namespace std;

void print_size_ptr (int n [])		// array decays to pointer
{
	// cannot use begin, end, size
	cout << "Size of array is " << sizeof (n) << endl;
	cout << "Type of array: " << typeid(n).name() << endl; // return Pi
}

void print_size_12array (int (&n) [12])		// takes only c-style int array of size 12
{
	cout << "In print 12" << endl;
	cout << "Size of array is " << size (n) << endl;
	cout << "Begin of array is " << *begin (n) << endl;
	cout << "End of array is " << *end (n) << endl;
	cout << "Type of array: " << typeid(n).name() << endl;	// Returns A12_i
}

template <int SIZE>
void print_size_narray (int (&n) [SIZE])	// generic param SIZE, can be any size array
{
	cout << "In print n" << endl;
	cout << "Size of array is " << size (n) << endl;
	cout << "Begin of array is " << *begin (n) << endl;
	cout << "End of array is " << *end (n) << endl;
}

int main()
{
   	int ia[] = {0,1,2,3,4,5,6,7,8,9, 10, 11}; // ia is an array of ten ints
	int *beg = begin(ia); // pointer to the first element in ia
	int *last = end(ia); // pointer one past the last element in ia
	int length1 = sizeof (ia) / sizeof (int);
	int length2 = last - beg;
	int length3 = size(ia);
	
	cout << "Type of array in main: " << typeid(ia).name() << endl;
	print_size_narray (ia);	       
	print_size_12array (ia);	 
	print_size_ptr (ia);	       

}
