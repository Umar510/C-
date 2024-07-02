#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "To Find LARGEST Number" << endl;
    cout << "Enter a b and c ";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "line-14 Largest number is  : " << a << endl;
        }
        else
        {
            if (c > b)
            {
                cout << "line-20 Largest number is  : " << c << endl;
            }
        }
    }
    else
    {
        if (b > c)
        {
            cout << "line-26 Largest number is  : " << b << endl;
        }
        else
        {
            if (c > a)
            {
                cout << "line-34 Largest number is  : " << c << endl;
            }
        }
    }
    // else if (b > c)
    // {
    //     cout << "Largest number is line-26 : " << b << endl;
    // }
    // else
    // {
    //     if (c > a)
    //     {
    //         cout << "Largest number is line-32 : " << c << endl;
    //     }
    // }
}
