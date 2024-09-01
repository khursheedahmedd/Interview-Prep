#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++) // Start from the second element
    {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Place the key at its correct position
    }
} // Time complexity O(n^2)

void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
} // Time complexity O(n^2)

void SelectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
} // Time complexity O(n^2)

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout << "\nEnter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "\nEnter the values of the array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    // InsertionSort(arr, size);
    // BubbleSort(arr, size);
    SelectionSort(arr, size);

    cout << "\nThe array in sorting order is: ";
    PrintArray(arr, size);

    delete[] arr;

    return 0;
}