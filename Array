#include <iostream>
using namespace std;

// Function to display array
void traverse(int arr[], int n)
{
    if (n == 0)
    {
        cout << "Array is empty.\n";
        return;
    }

    cout << "Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert element
void insert(int arr[], int &n)
{
    int pos, value;

    cout << "Enter position: ";
    cin >> pos;

    if (pos < 1 || pos > n + 1)
    {
        cout << "Invalid Position!\n";
        return;
    }

    cout << "Enter value: ";
    cin >> value;

    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    cout << "Element inserted successfully.\n";
}

// Function to delete element
void deleteElement(int arr[], int &n)
{
    int pos;

    if (n == 0)
    {
        cout << "Array is empty.\n";
        return;
    }

    cout << "Enter position to delete: ";
    cin >> pos;

    if (pos < 1 || pos > n)
    {
        cout << "Invalid Position!\n";
        return;
    }

    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Element deleted successfully.\n";
}

// Function to search element
void search(int arr[], int n)
{
    int key;
    bool found = false;

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Element not found.\n";
    }
}

int main()
{
    int arr[100], n, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n------ MENU ------\n";
        cout << "1. Traverse\n";
        cout << "2. Insert\n";
        cout << "3. Delete\n";
        cout << "4. Search\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                traverse(arr, n);
                break;

            case 2:
                insert(arr, n);
                break;

            case 3:
                deleteElement(arr, n);
                break;

            case 4:
                search(arr, n);
                break;

            case 5:
                cout << "Program Ended.\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
