#include <iostream>
#include <climits>
using namespace std;
int maxi(int arr[], int n)
{
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    return maximum;
}
int main()
{
    cout << "Please enter number of elements of array";
    int n;
    cin >> n;
    int arr[n];
    cout << "NOw neter elements one by one";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = maxi(arr, n);
    cout << "So the largset number in the array is " << result;
}