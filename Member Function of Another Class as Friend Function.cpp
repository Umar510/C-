#include<iostream>
using namespace std;

class Vehicle; // Forward declaration of the Vehicle class

class AnotherClass
{
public:
    // Member function of AnotherClass declared as a friend of Vehicle class
    void callPrivateMethods(Vehicle&);
};

class Vehicle
{
private:
    void piston()
    {
        cout<<"4 piston\n";
    }

    void manWhoMade()
    {
        cout<<"Markus Librette\n";
    }

public:
    void company()
    {
        cout<<"GFG\n";
    }

    // Declaring AnotherClass::callPrivateMethods() as a friend
    friend void AnotherClass::callPrivateMethods(Vehicle&);
};

// Definition of AnotherClass::callPrivateMethods()
void AnotherClass::callPrivateMethods(Vehicle& v)
{
    v.piston();
    v.manWhoMade();
}

int main()
{
    Vehicle obj;
    obj.company(); // calling public member function company()
    
    AnotherClass anotherObj;
    anotherObj.callPrivateMethods(obj); // calling private methods using AnotherClass's member function

    return 0;
}

