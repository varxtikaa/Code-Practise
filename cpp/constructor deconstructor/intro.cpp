/*
Encapsulation:
-binding together the data and the fucntions that can
manipulate it. 
-ex- if a finance person wants data about sales he has to 
contact a sales officer.
-leads to data abstraction and data hiding.

Abstraction:
-

Polymorphism: 

*/
// C++ program for virtual function overriding
#include <bits/stdc++.h>
using namespace std;

class base {
public:
	void print()
	{
		cout << "print base class" << endl;
	}

	void show() { cout << "show base class" << endl; }
};

class derived : public base {
public:
	// print () is already virtual function in
	// derived class, we could also declared as
	// virtual void print () explicitly
	void print() { cout << "print derived class" << endl; }

	void show() { cout << "show derived class" << endl; }
};

// Driver code
int main()
{
	base* bptr;
	derived d;
	bptr = &d;

	// Virtual function, binded at
	// runtime (Runtime polymorphism)
	bptr->print();

	// Non-virtual function, binded
	// at compile time
	bptr->show();

	return 0;
}

//virtual allows child class to make changes
//else base class retains
