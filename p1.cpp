#include <bits/stdc++.h>
using namespace std;

void bSort(int a[], int n) {
    // Bubble Sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    cout<<"Enter the number of ele in array: ";
    int arrEleNumber;
    cin>>arrEleNumber;
    int arr[arrEleNumber];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<arrEleNumber;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(*arr);

    // for (int i = 0; i < n; i++) {
    //     cout << "Address of a[" << i << "] = " << (a + i) << endl;
    // }

    cout << "Array before sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bSort(arr, n);  
    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
