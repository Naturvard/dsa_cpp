#include <iostream>
using namespace std;
void shiftBy1(int arr[], int n)
{
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
int main()
{
    cout << "Enter number of digits in array ";
    int n;
    cin >> n;
    cout << "Enter array elements one by one ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "new array is: ";
    shiftBy1(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}