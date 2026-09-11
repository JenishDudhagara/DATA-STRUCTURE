#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

// Insert at beginning
void insertBeginning(int value)
{
    Node *newNode = new Node;

    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertEnd(int value)
{
    Node *newNode = new Node;

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

// Insert after a given node
void insertAfter(int key, int value)
{
    Node *temp = head;

    while (temp != NULL && temp->data != key)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Given node not found." << endl;
        return;
    }

    Node *newNode = new Node;

    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;
}

// Display linked list
void display()
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    // Insert at beginning
    insertBeginning(20);
    insertBeginning(10);

    cout << "After insertion at beginning:" << endl;
    display();

    // Insert at end
    insertEnd(30);
    insertEnd(40);

    cout << "After insertion at end:" << endl;
    display();

    // Insert 25 after node 20
    insertAfter(20, 25);

    cout << "After inserting 25 after node 20:" << endl;
    display();

    return 0;
}
