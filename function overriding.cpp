// C++ program to demonstrate function overriding 

//#include <iostream>
//using namespace std;
//
//class Parent {
//public:
//	void GeeksforGeeks_Print()
//	{
//		cout << "Base Function" << endl;
//	}
//};
//
//class Child : public Parent {
//public:
//	void GeeksforGeeks_Print()
//	{
//		cout << "Derived Function" << endl;
//	}
//};
//
//int main()
//{
//	Child Child_Derived;
//	Child_Derived.GeeksforGeeks_Print();
//}

//Call Overridden Function From Derived Class
// C++ program to demonstrate function overriding
// by calling the overridden function
// of a member function from the child class

#include <iostream>
using namespace std;

class Parent {
public:
	virtual void GeeksforGeeks_Print()
	{
		cout << "Base Function" << endl;
	}
};

class Child : public Parent {
public:

	void GeeksforGeeks_Print()
	{
//	     	Parent::GeeksforGeeks_Print();

		cout << "Derived Function" << endl;

		// call of overridden function
	}
};

int main()
{
	Parent* ptr;	
	Child child;
	 ptr=&child;
	ptr->GeeksforGeeks_Print(); // CHILD class method called/overridden as Virtual method/function declared in PARENT class


	Parent parent;
	parent.GeeksforGeeks_Print(); // calling PARENT class method
	
	child.GeeksforGeeks_Print(); // calling DERIVED/CHILD class method
	
	return 0;
}

//-1 if we create child class object, it will call child class function
//-2 if we create Parent class object, it will call Parent class function
//-3 if we create pointer of parent class and give it reference of child class object then the parent class function will be called, 
//however if we declare parent class function as virtual function then the CHILD class function will be called.

