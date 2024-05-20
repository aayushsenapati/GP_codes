#include <iostream>
#include <vector>
#include <type_traits>
using namespace std;	

    void reserve( int newCapacity )
    {
        if( newCapacity < theSize )
            return;

        Object *newArray = new Object[ newCapacity ];
        for( int k = 0; k < theSize; ++k )
	  newArray[ k ] = std::move( objects[ k ] );

        theCapacity = newCapacity;
        std::swap( objects, newArray );
        delete [ ] newArray;
    }

      // Stacky stuff
    void push_back( const Object & x )
    {
        if( theSize == theCapacity )
            reserve( 2 * theCapacity + 1 );
        objects[ theSize++ ] = x;
    }



class A
{
public:
	int *ptr;
	A ()
	{
		ptr = new int[1000];
		cout << "Constructor" << endl;
	}
	
	~A ()
	{
		cout << "Destructor" << endl;
		// if(ptr != nullptr)
		// 	delete ptr;
	}
	A (const A &a1)   // Copy constructor
	{
		cout << "Copy constructor" << endl;
		this->ptr = new int[1000];
		for(int i=0; i<1000; i++) {
			ptr[i] = a1.ptr[i];
		}
		// ptr = a1.ptr;
		// a1.ptr = nullptr;
	}


/*
The noexcept operator performs a compile-time check that returns true if an expression is declared to not throw any exceptions.

It can be used within a function template's noexcept specifier to declare that the function will throw exceptions for some types but not others.
*/
a = b = c;
	A& operator=(A && a1) noexcept    // Move assign
	{
		cout << "Move assign" << endl;
		this->ptr = a1.ptr;
		a1.ptr = nullptr;
		return *this;
	}

	A (A && a1) noexcept    // Move constructor
	{
		cout << "Move constructor" << endl;
		this->ptr = a1.ptr;
		a1.ptr = nullptr;
	}
};


int main ()
{
	A a1;
	A& t = a1;
	cout << "assign reference" << endl;
	vector <A> v1;
	//A a3 = A(); === A a4();

	// cout << endl << "before stck---------------------------------------------\n\n";
	// A arr[2];
	// cout << endl << "before heap---------------------------------------------\n\n";
	// A* heap = new A[2];
	// cout << endl << "after heap---------------------------------------------\n\n";

	v1.push_back (A()); // push_back() makes a copy of the object that
			    // is being pushed back.
	cout << "after A()" << endl << "---------------------------------------------\n\n";
	v1.push_back (A());  // This results in Copy constructor being called
	cout << endl;
	v1.push_back (A());  // This results in Copy constructor being called
	cout << endl;
	v1.push_back (A());  // This results in Copy constructor being called
	cout << endl;
	v1.push_back (A());  // This results in Copy constructor being called
	cout << endl;
	v1.push_back (A());  // This results in Copy constructor being called
	cout << endl;
	v1.push_back (A());  // This results in Copy constructor being called
	cout << endl;
	v1.push_back (A());  // This results in Copy constructor being called
	cout << endl;
	v1.push_back (A());  // This results in Copy constructor being called
	cout << endl;
	v1.push_back (A());  // This results in Copy constructor being called
	cout << endl;
	v1.push_back (A());  // This results in Copy constructor being called
	cout << endl;
	v1.push_back (A());  // This results in Copy constructor being called
	cout << endl;
	v1.push_back (A());  // This results in Copy constructor being called
	cout << endl;
	v1.push_back (A());  // This results in Copy constructor being called
	cout << "after a1()" << endl << "----------------------------------\n\n";
	v1.push_back (move (a1));  // This calls move constructor
	cout << "after a1()" << endl << "----------------------------------\n\n";
	// move() is a function used to convert an lvalue reference into the rvalue reference.
	return 0;
}
