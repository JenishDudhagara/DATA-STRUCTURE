#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

// Insert nodes
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

// Delete first node
void deleteFirst()
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = head;
    head = head->next;
    delete temp;
}

// Delete last node
void deleteLast()
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}

// Delete node after a given node
void deleteAfter(int key)
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

    if (temp->next == NULL)
    {
        cout << "No node exists after " << key << "." << endl;
        return;
    }

    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;
}

// Display all nodes
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
    // Create predefined linked list
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);

    cout << "Original Linked List:" << endl;
    display();

    // Delete first node
    deleteFirst();

    cout << "\nAfter deleting first node:" << endl;
    display();

    // Delete last node
    deleteLast();

    cout << "\nAfter deleting last node:" << endl;
    display();

    // Delete node after 20
    deleteAfter(20);

    cout << "\nAfter deleting node after 20:" << endl;
    display();

    return 0;
}
