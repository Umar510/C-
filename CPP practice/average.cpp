// C++ program to show unary
// operator overloading
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of values to achieve average: ";
    cin >> n;
    int arr[n];
    for (int k = 0; k < n; k++)
    {
        cout << "Enter value " << k + 1 << ": ";
        cin >> arr[k];
    }
    cout << endl;
    cout << "Size of array is: " << sizeof(arr) / sizeof(arr[0])
         << endl;

    int sum = 0, avg = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    avg = sum / n;
    cout << "Sum is: " << sum << endl;
    cout << "Average is: " << avg;
    return 0;
}