#include <iostream>
using namespace std;
void shiftBy1(int arr[],int n){
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            arr[j] = arr[j + 1];
        }
         if(i==n){
             arr[0] = arr[n - 1];
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
    cout << "new array is: ";
    shiftBy1(arr, n);
}