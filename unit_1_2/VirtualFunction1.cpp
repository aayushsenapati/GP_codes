// C++ program to illustrate concept of Virtual Functions

#include <iostream>
using namespace std;

class base {
public:

	void operator=(const base& d){
		cout << "In operator="<< endl;
		a = d.a;
	}
	
	int a;
	 void print() { cout << "print base class\n"; }
	void show() { cout << "show base class\n"; }
};

class derived : public base {
public:
	
	void print() { cout << "print derived class\n"; }

	void show() { cout << "show derived class\n"; }
};

int main()
{
	derived d;
	d.a = 10;
	base& bptr = d;
	derived e;
	e.a = 20;
	cout << "addresses " <<" D : " <<  &d << " " <<" E : " << &e <<" " <<" BPTR : " << &bptr << endl;
	cout << "A : " << bptr.a << endl;
	bptr = e;
	cout << "addresses " <<" D : " <<  &d << " " <<" E : " << &e <<" " <<" BPTR : " << &bptr << endl;
	cout << "A : " << bptr.a <<" " << d.a <<  endl;
	// Virtual function - binding at runtime
	bptr.print();

	// Non-virtual function, binding at compile time
	bptr.show();

	return 0;
}
