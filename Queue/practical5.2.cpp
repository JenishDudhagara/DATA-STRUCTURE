#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Enqueue operation
void enqueuer()
{
    int value;

    // Check if queue is full
    if ((rear + 1) % MAX == front)
    {
        cout << "Queue Overflow!" << endl;
        return;
    }

    cout << "Enter value to insert: ";
    cin >> value;

    // First element
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX;
    }

    queue[rear] = value;

    cout << "Element inserted successfully." << endl;
}

// Dequeue operation
void dequeuer()
{
    if (front == -1)
    {
        cout << "Queue Underflow!" << endl;
        return;
    }

    cout << "Deleted element: " << queue[front] << endl;

    // If only one element is present
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }
}

// Display operation
void display()
{
    if (front == -1)
    {
        cout << "Queue is empty." << endl;
        return;
    }

    cout << "Queue elements: ";

    int i = front;

    while (true)
    {
        cout << queue[i] << " ";

        if (i == rear)
            break;

        i = (i + 1) % MAX;
    }

    cout << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "\n------ CIRCULAR QUEUE MENU ------" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                enqueuer();
                break;

            case 2:
                dequeuer();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Program Ended." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}

