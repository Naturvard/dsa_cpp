#include <iostream>
using namespace std;
int unique(int arr[],int n){
    int ans = 0;
    for (int i = 0; i < n;i++){

        ans = ans ^ arr[i];
    }
    return ans;
    }
int main(){
    cout << "Enter number of digits in array ";
    int n;
    cin >> n;
    cout << "Enter array elements one by one ";
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int result = unique(arr, n);
    cout << " So the unique element is "<<result;
}