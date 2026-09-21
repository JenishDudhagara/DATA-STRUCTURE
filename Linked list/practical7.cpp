#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

// Insert at beginning
void insertBeginning()
{
    int value;
    cout << "Enter value: ";
    cin >> value;

    Node *newNode = new Node;
    newNode->data = value;

    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        Node *temp = head;

        while (temp->next != head)
        {
            temp = temp->next;
        }

        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }

    cout << "Node inserted at beginning." << endl;
}

// Insert at end
void insertEnd()
{
    int value;
    cout << "Enter value: ";
    cin >> value;

    Node *newNode = new Node;
    newNode->data = value;

    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        Node *temp = head;

        while (temp->next != head)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }

    cout << "Node inserted at end." << endl;
}

// Insert after a given node
void insertAfter()
{
    int key, value;

    cout << "Enter node after which to insert: ";
    cin >> key;

    cout << "Enter value: ";
    cin >> value;

    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = head;

    do
    {
        if (temp->data == key)
        {
            Node *newNode = new Node;
            newNode->data = value;

            newNode->next = temp->next;
            temp->next = newNode;

            cout << "Node inserted successfully." << endl;
            return;
        }

        temp = temp->next;

    } while (temp != head);

    cout << "Given node not found." << endl;
}

// Delete first node
void deleteFirst()
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    if (head->next == head)
    {
        delete head;
        head = NULL;
    }
    else
    {
        Node *temp = head;

        while (temp->next != head)
        {
            temp = temp->next;
        }

        Node *deleteNode = head;

        head = head->next;
        temp->next = head;

        delete deleteNode;
    }

    cout << "First node deleted." << endl;
}

// Delete last node
void deleteLast()
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    if (head->next == head)
    {
        delete head;
        head = NULL;
    }
    else
    {
        Node *temp = head;

        while (temp->next->next != head)
        {
            temp = temp->next;
        }

        Node *deleteNode = temp->next;

        temp->next = head;

        delete deleteNode;
    }

    cout << "Last node deleted." << endl;
}

// Delete node after a given node
void deleteAfter()
{
    int key;

    cout << "Enter node after which to delete: ";
    cin >> key;

    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = head;

    do
    {
        if (temp->data == key)
        {
            if (temp->next == head)
            {
                cout << "No node exists after this node." << endl;
                return;
            }

            Node *deleteNode = temp->next;

            temp->next = deleteNode->next;

            delete deleteNode;

            cout << "Node deleted successfully." << endl;
            return;
        }

        temp = temp->next;

    } while (temp != head);

    cout << "Given node not found." << endl;
}

// Display all nodes
void display()
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = head;

    cout << "Circular Linked List: ";

    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;

    } while (temp != head);

    cout << "HEAD" << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== SINGLY CIRCULAR LINKED LIST ==========" << endl;
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Insert After Given Node" << endl;
        cout << "4. Delete First Node" << endl;
        cout << "5. Delete Last Node" << endl;
        cout << "6. Delete Node After Given Node" << endl;
        cout << "7. Display" << endl;
        cout << "8. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                insertBeginning();
                break;

            case 2:
                insertEnd();
                break;

            case 3:
                insertAfter();
                break;

            case 4:
                deleteFirst();
                break;

            case 5:
                deleteLast();
                break;

            case 6:
                deleteAfter();
                break;

            case 7:
                display();
                break;

            case 8:
                cout << "Program ended." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 8);

    return 0;
}
