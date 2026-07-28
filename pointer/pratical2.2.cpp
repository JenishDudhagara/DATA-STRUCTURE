#include <iostream>
using namespace std;

// Call by Value
void callByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "\nInside Call by Value:";
    cout << "\na = " << a << " b = " << b << endl;
}

// Call by Reference
void callByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "\nInside Call by Reference:";
    cout << "\na = " << a << " b = " << b << endl;
}

int main()
{
    int x = 10, y = 20;

    cout << "Before Call by Value:";
    cout << "\nx = " << x << " y = " << y << endl;

    callByValue(x, y);

    cout << "\nAfter Call by Value:";
    cout << "\nx = " << x << " y = " << y << endl;

    cout << "\nBefore Call by Reference:";
    cout << "\nx = " << x << " y = " << y << endl;

    callByReference(x, y);

    cout << "\nAfter Call by Reference:";
    cout << "\nx = " << x << " y = " << y << endl;

    return 0;
}
