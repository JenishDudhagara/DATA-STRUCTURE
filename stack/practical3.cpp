#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

// Push Operation
void push()
{
    int value;

    if (top == MAX - 1)
    {
        cout << "Stack Overflow!" << endl;
        return;
    }

    cout << "Enter value to push: ";
    cin >> value;

    top++;
    stack[top] = value;

    cout << "Element pushed successfully." << endl;
}

// Pop Operation
void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow!" << endl;
        return;
    }

    cout << "Deleted Element: " << stack[top] << endl;
    top--;
}

// Peek Operation
void peek()
{
    if (top == -1)
    {
        cout << "Stack is Empty." << endl;
        return;
    }

    cout << "Top Element: " << stack[top] << endl;
}

// Display Operation
void display()
{
    if (top == -1)
    {
        cout << "Stack is Empty." << endl;
        return;
    }

    cout << "Stack Elements are:" << endl;

    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n------ STACK MENU ------" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Program Ended." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
