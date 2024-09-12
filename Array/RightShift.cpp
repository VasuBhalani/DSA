#include <iostream>
#include <vector>
using namespace std;

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void revrese(int arr[],int n,int i){
int s = i;
int e = n-1;
while(s<=e)
  swap(arr[s++],arr[e--]);
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];  // Can be replaced with vector<int> or dynamic allocation for portability
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Display Input : ";
    display(arr, n);
    
    int d;
    cout<<"Enter the d : ";
    cin >> d;
    d = d % n;  // Handle cases where d >= n

    vector<int> temp;
    int j = n - d;

    //reverse(arr,0,n-d-1)
    //revrese(arr,n-d,n-1)
    //revrese(arr,0,n-1)
    
    // Collect last d elements 
    for (int i = j; i < n; i++) {
        temp.push_back(arr[i]);
    }
    
    // Shift 0 to n-d to right by d positions
    for (int i = n - d - 1; i >= 0; i--) {
        arr[i + d] = arr[i];
    }
    
    // Place the temp elements back to the start of the array
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
    cout<<"Final output : ";
    display(arr, n);
    
    return 0;
}
