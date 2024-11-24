#include <iostream>
using namespace std;
void pairs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "[ " << arr[i] << ", " << arr[j] << " ]";
        }
    }
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
    pairs(arr, n);
}