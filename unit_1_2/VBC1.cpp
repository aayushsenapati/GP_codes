#include <iostream>
using namespace std;

class A {
public:
	int a;
	A() // constructor
	{
		a = 10;
	}
};

class B : public virtual A {
	int b;
};

class C : public virtual A{
	int c;
};

class D : public B, public C{
	int d;
};

int main()
{
	A* pointer;
	D object; // object creation of class d
	

	cout << "Address of B::a = " << &object.B::a << endl;  //Removing virtual changes these addresses
	cout << "Address of C::a = " << &object.C::a << endl;
	cout << "Size of object: " << sizeof(object) << endl;

	return 0;
}
