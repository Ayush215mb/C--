#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}

// Function to implement Selection Sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        // Swap the found minimum element with the first element
        swap(arr[min_idx], arr[i]);
    }
}

// Function to print the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function to test the Selection Sort algorithm
int main()
{
    int n;

    // Get the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> n;

    // Declare the array
    int arr[n];

    // Get the array elements from the user
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Print the original array
    cout << "Original array: " << endl;
    printArray(arr, n);

    // Sort the array using Selection Sort
    selectionSort(arr, n);

    // Print the sorted array
    cout << "Sorted array: " << endl;
    printArray(arr, n);

    return 0;
}
