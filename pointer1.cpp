#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int *ptr = arr + n - 1;

    cout << "Array in reverse order:\n";
    for(int i = 0; i < n; i++)
    {
        cout << *ptr << " ";
        ptr--;
    }

    return 0;
}
