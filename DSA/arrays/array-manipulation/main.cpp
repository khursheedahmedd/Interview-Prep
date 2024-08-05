#include <iostream>
using namespace std;

class myArray
{
private:
    int *arr;
    int size;
    int capacity;

public:
    myArray()
    {
        capacity = 100;
        size = 0;
        arr = new int[capacity];
    }

    void insertOne(int num)
    {
        if (size < capacity)
        {
            arr[size] = num;
            size++;
            cout << "\nThe element is inserted.";
        }
        else
        {
            cout << "\nThe capacity is full.";
        }
    }
    void PrintArray()
    {
        cout << "\n";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
    }
    void InsertMany(int array[], int newSize)
    {
        int totalSize = newSize + size;
        if (totalSize < capacity)
        {
            for (int i = 0; i < newSize; i++)
            {
                arr[size] = array[i];
                size++;
            }
            size = totalSize;
            cout << "\nThe elements are inserted.";
        }
        else
            cout << "\nDon't have enough capacity.";
    }
    void RemoveElement(int num)
    {
    }

    int SearchElement(int num)
    {
        for (int i = 0; i < size; i++)
        {
            if (num == arr[i])
                return arr[i];
        }
        return -1;
    }

    void UpdateElement(int newNum, int oldNum)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == oldNum)
            {
                arr[i] = newNum;
                cout << "\nElement is updated.";
                return;
            }
        }
        cout << "\nElement is not updated bcuz its not found.";
    }
};

void PrintChoices()
{
    cout << "\n\n1. Insert one element";
    cout << "\n2. Insert multiple elements";
    cout << "\n3. Search an element";
    cout << "\n4. Remove an element";
    cout << "\n5. Update an element";
    cout << "\n6. Print array";
    cout << "\n7. Exit";
}

int main()
{

    myArray array;

    do
    {
        int choice = 0;
        PrintChoices();
        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int num;
            cout << "\nEnter the number to insert: ";
            cin >> num;

            array.insertOne(num);

            break;
        }
        case 2:
        {
            int size;
            cout << "\nHow many elements you want to insert: ";
            cin >> size;

            int arr[size];
            cout << "\nEnter the elements to insert: ";
            for (int i = 0; i < size; i++)
            {
                cin >> arr[i];
            }

            array.InsertMany(arr, size);

            break;
        }
        case 3:
        {
            int num;
            cout << "\nEnter the element you want to search: ";
            cin >> num;

            int foundNum = array.SearchElement(num);

            if (foundNum == -1)
                cout << "\nNo element found";
            else
                cout << "Found: " << foundNum;

            break;
        }
        case 4:
        {
            int num;
            cout << "\nEnter the element you want to remove: ";
            cin >> num;

            array.RemoveElement(num);

            break;
        }
        case 5:
        {
            int newNum, oldNum;
            cout << "\nEnter the new element: ";
            cin >> newNum;
            cout << "\nEnter the old element: ";
            cin >> oldNum;

            array.UpdateElement(newNum, oldNum);

            break;
        }
        case 6:
        {
            array.PrintArray();
            break;
        }
        case 7:
            exit(0);
        }
    } while (true);
}