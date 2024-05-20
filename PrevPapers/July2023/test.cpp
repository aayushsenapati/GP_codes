#include <iostream>

using namespace std;

void print_size_12array (int (&n) [10])		// takes only c-style int array of size 12
{
	cout << "In print 12" << endl;
	cout << "Size of array is " << size (n) << endl;
	cout << "Begin of array is " << *begin (n) << endl;
	cout << "End of array is " << *end (n) << endl;
	cout << "Type of array: " << typeid(n).name() << endl;	// Returns A12_i
}

int main(){
    int n[10]={1,2,3,4,5,6,7,8,9,10};
    cout<< typeid(n).name()
    print_size_12array(n);
    return 0;
}
