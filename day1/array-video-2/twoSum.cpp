#include <iostream>
using namespace std;
void twoSum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << "[ " << arr[i] << ", " << arr[j] << " ]";
            cout << arr[i] + arr[j] << endl;
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
    twoSum(arr, n);
}