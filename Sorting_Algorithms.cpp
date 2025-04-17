#include <bits/stdc++.h>
using namespace std;

void Selection_Sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // SWAPPING HAPPENS OR WE CAN ALSO USE --> SWAP(arr[min],arr[i]);
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
void Bubble_Sort(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void Insertion_Sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main()
{
    int n;
    // NUMBER OF ELEMENTS IN THE ARRAY
    cout << "Enter the number of array elements: ";
    // INPUT FOR THE NUMBER OF ELEMENTS IN THE ARRAY
    cin >> n;
    // DECELEARTION FOR THE ARRAY
    int arr[n];
    // TAKING THE ELEMENTS FOR THE ARRAY
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // FUCNTION CALL FOR SORTING ALGORITHMS

    // Selection_Sort(arr, n);
    // Bubble_Sort(arr, n);
    // Insertion_Sort(arr, n);

    // PRINTING THE ARRAY ELEMENTS IN THE SORTED MANNER
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}