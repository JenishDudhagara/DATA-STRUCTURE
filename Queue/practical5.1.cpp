#include<iostream>

using namespace std;

#define size 100

int queue[size];
int front=-1;
int back=-1;

void enqueuer()
{
    int value;
    if (back==size-1)
    {
        cout<<"QUEUE IS FULL"<<endl;
    }
    else{
    if (front==-1){
        front=0;
    }
    cout<<"Enter the value to enqueuer"<<endl;
    cin>>value;
    back++;
    queue[back]=value;
    cout<<"VALUE ENQUEUER";
}
}

void dequeuer()
{
    if (front ==-1 || front>back){
    cout<<"QUEUE IS EMPTY";
}
    else{
        cout<<"deleted element:"<<queue[front]<<endl;
        front++;

        if(front>back)
      {front=-1;
        back=-1;
    }
    }
}

void display()
{
    if(front==-1){
        cout<<"QUEUE IS EMPTY\n";
    }
    else{
        cout<<"Queue element are:"<<endl;
        for(int i = front;i <= back;i++)
      {

        cout<<queue[i]<<" ";}
    }
   {

    cout<<"\n";
}
}
int main() {
    int choice;

    while (true) {
        cout << "\n*** QUEUE MENU ***\n";
        cout << "1. Enqueue (Insert)\n";
        cout << "2. Dequeue (Delete)\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
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
                cout << "\nExiting program. Goodbye!\n";
                return 0;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    }
    return 0;
}
