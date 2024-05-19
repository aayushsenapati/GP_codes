#include <iostream>
#include <vector>

using namespace std;	

class A
{
public:
	int *ptr;
	A ()
	{
		ptr = new int;
		cout << "Constructor" << endl;
	}
	~A ()
	{
		cout << "Destructor" << endl;
		delete ptr;
	}
	A (const A &a1)   // Copy constructor
	{
		cout << "Copy constructor" << endl;
		this->ptr = new int;
	}
	A (A && a1)       // Move constructor
	{
		cout << "Move constructor" << endl;
		this->ptr = a1.ptr;
		a1.ptr = nullptr;
	}
};

int main ()
{
	vector <A> v1;
	v1.push_back (A());
	return 0;
}
