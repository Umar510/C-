#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        piston();
        manWhoMade();
    }

private:
    void piston()
    {
        cout << "4 piston\n";
    }

    void manWhoMade()
    {
        cout << "Markus Librette\n";
    }

public:
    void company()
    {
        cout << "GFG\n";
    }

    // Declaring main() as a friend function to access private members
    // friend int f(Vehicle&);

    // other public member functions...
};
// int f(Vehicle& v)
//{
//	v.piston();
//	v.manWhoMade();
// }

int main()
{
    Vehicle obj;
    obj.company(); // calling public member function company()
                   //    f(obj);
    // Directly calling private methods from main()
    return 0;
}
