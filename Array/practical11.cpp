#include <iostream>
using namespace std;

// Binary Search Function
int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = 9;
    int key = 70;

    int result = binarySearch(arr, n, key);

    if (result != -1)
    {
        cout << "Element found at position "
             << result + 1 << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}
