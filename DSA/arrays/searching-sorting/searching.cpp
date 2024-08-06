#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
} // Time complexity O(n)

int BinarySearch(int arr[], int size, int num)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (num == arr[mid])
            return mid;
        else if (num > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
} // Time complexity O(log(n))

int main()
{
    int size;
    cout << "\nEnter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "\nEnter the values of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int num;
    cout << "\nEnter the number you want to find: ";
    cin >> num;

    int found = BinarySearch(arr, size, num);

    if (found == -1)
        cout << "\nThe number is not found.";
    else
        cout << "\nThe index of number is: " << found;

    delete[] arr;

    return 0;
}