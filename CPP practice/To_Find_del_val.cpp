#include <iostream>
using namespace std;

void deleteValue(int arr[], int &size, int index)
{
    // Check if the index is valid
    if (index < 0 || index >= size)
    {
        cout << "Invalid index" << endl;
        return;
    }

    // Store the value to be deleted
    int deletedValue = arr[index];

    // Shift elements to the left to fill the gap
    for (int i = index; i < size - 1; ++i)
    {
        arr[i] = arr[i + 1];
        
        // cout<<"VALUE shifted: "<<arr[i]<<endl;
    }
    // Decrease the size of the array
    size--;
    // Output the deleted value
    cout << "Deleted value: " << deletedValue << endl;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[1]);
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "which value you want to delelte" << endl;
    int Val, indexToDelete;
    cin >> Val;
    for (int i = 0; i < size; ++i)
    {
        if (Val == arr[i])
            indexToDelete = i;
    }

    deleteValue(arr, size, indexToDelete);

    // Output the array after deletion
    cout << "Array after deletion: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}