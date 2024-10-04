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
            cout << "line-13 Largest number is  : " << a << endl;
        }
        else
        {
            cout << "line-17 Largest number is  : " << c << endl;
            // if (c > b)
            // {
            // cout << "line-20 Largest number is  : " << c << endl;
            // }
        }
    }
    else
    {
        // if (b > c)
        // {
        //     cout << "line-28 Largest number is  : " << b << endl;
        // }
        // else
        // {
        //     cout << "line-32 Largest number is  : " << c << endl;
        //     // if (c > a)
        //     // {
        //     // cout << "line-34 Largest number is  : " << c << endl;
        //     // }
        // }
        if (b < c)
        {
            cout << "line-40 Largest number is  : " << c << endl;
        }
        else
        {
            cout << "line-43 Largest number is  : " << b << endl;
            // if (c > a)
            // {
            // cout << "line-34 Largest number is  : " << c << endl;
            // }
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