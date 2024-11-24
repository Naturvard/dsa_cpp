#include <iostream>
using namespace std;
int countZeros(int arr[],int n){
    int count = 0;
    for (int i = 0; i < n;i++){
        if(arr[i]==0){
            count++;
        }
    }
    return count;
}
int countOnes(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
    }
    return count;
}
int main(){
    cout << "Please enter the number of elements of array";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];

    }
    cout << "The number of zeros are " << countZeros(arr, n)<<endl;
    cout << "The number of ones are " << countOnes(arr, n)<<endl;
}

