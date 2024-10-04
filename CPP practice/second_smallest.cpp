#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a b and c ";
    cin >> a >> b >> c;
    cout << "To find second smallest..." << endl;
    if (a < b)
    {
        if (a < c)
        {
            if (c < b)
            {
                cout << "c= " << c << " is Second smallest " << endl;
            }
            else
            {
                cout << "b= " << b << " is Second smallest " << endl;
            }
        }
        else
        {
            cout << "a= " << a << " is Second smallest" << endl;
        }
    }
    else
    {
        if (b < c)
        {
            if (c < a)
            {
                cout << "c= " << c << " is Second smallest " << endl;
            }
            else
            {
                cout << "a= " << a << " is Second smallest " << endl;
            }
        }
        else
        {
            cout << "b= " << b << " is Second smallest " << endl;
        }
    }
    cout << "Using Conditional Operator" << endl;

    // Second Largest
    cout << "To find Second Largest..." << endl;
    if (a > b) // 1<2
    {
        if (a > c) // 1<5
        {
            if (c > b) // 5<2
            {
                cout << "c= " << c << " is Second largest " << endl;
            }
            else // 2<5
            {
                cout << "b= " << b << " is Second largest " << endl;
            }
        }
        else
        {
            cout << "a= " << a << " is Second largest" << endl;
        }
    }
    else // if (b>a)
    {
        if (b > c)
        {
            if (c > a)
            {
                cout << "c= " << c << " is Second largest " << endl;
            }
            else
            {
                cout << "a= " << a << " is Second largest " << endl;
            }
        }
        else
        {
            cout << "b= " << b << " is Second largest " << endl;
        }
    }
    // else
    // {
    //     if (c < a)
    //     {
    //         if (c < b)
    //         {
    //             if (b < a)
    //             {
    //                 cout << "a= " << a << " is Second smallest " << endl;
    //             }
    //             else
    //             {
    //                 cout << "b= " << b << " is Second smallest " << endl;
    //             }
    //         }
    //     }
    // }
}
