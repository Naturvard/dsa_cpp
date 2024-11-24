#include <iostream>
using namespace std;

int linearSearch(int arr[], int target)
{
    for (int i = 0; i <3; i++)
    {
        if (arr[i] == target)
        {
            return i; // Return index if target is found
        }
    }
    return -1; // Return -1 if target is not found
}

int main()
{

    int target;
    cin >> target;

    int arr[8]; // Dynamically allocate array size based on n

    // Input array elements
    for (int i = 0; i < 3; i++)
    {
       
        cin >> arr[i];
    }

    // Call the linearSearch function
    int result = linearSearch(arr, target);

    // Print the result
    if (result != -1)
    {
        cout << "Found at index " << result << endl; // Print the index if found
    }
    else
    {
        cout << "Not found" << endl; // Print if not found
    }

    return 0;
}
