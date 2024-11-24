#include <iostream>
using namespace std;
void sorty(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
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
    sorty(arr, n);
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}