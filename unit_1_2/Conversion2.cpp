// C++ program to illustrate the type-conversion
#include <bits/stdc++.h>
using namespace std;

// Time Class
class Time {
	int hour;
	int mins;
	int* p;

public:
	// Default Constructor
	Time()
	{
		p = new int;
		*p = 1234;
		hour = 0;
		mins = 0;
	}

	// Parameterized Constructor
	Time(int t)
	{
		cout << "Conversion happening" << endl;
		hour = t / 60;
		mins = t % 60;
	}

	Time& operator=(const Time& a) {
		cout << "assigning = " << a.hour <<":" <<a.mins << endl;
		hour = 69;
		mins = 420;
		return *this;
	}
 
  	Time(const Time& t) {
      cout << "Test copy" << endl;
    }
	
    operator int(){ 
    	return hour *60 + mins;
    }

	// Function to print the value of class variables
	void Display()
	{
		cout << "Time = " << hour << " hrs and " 
				<< mins << " mins\n";
	}
};



int main()
{
	// Object of Time class
	Time T1;
	int dur = 95;

	// Conversion of int type to class type
	T1 = dur;
	//T1.operator=(Time(dur));
    int dur2 = T1;
	T1.Display();

	return 0;
}
