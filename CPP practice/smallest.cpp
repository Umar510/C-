#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "To Find SMALLEST Number..." << endl;
    cout << "Enter a b and c ";
    cin >> a >> b >> c;
    if (a < b)
    {
        if (a < c)
        {
            cout << "Smallest Number is " << a << endl;
        }
        else
        {
            if (c < b)
            {
                cout << "Smallest Number is " << c << endl;
            }
        }
    }
    else
    {
        if (b < c)
        {
            cout << "Smallest Number is " << b << endl;
        }
        else
        {
            if (c < a)
                cout << "Smallest Number is " << c << endl;
        }
    }
}