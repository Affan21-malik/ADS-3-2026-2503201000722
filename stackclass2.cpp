#include <iostream>
using namespace std;

// Node class
class Node
{
public:
    int data;
    Node *link;

    // Constructor
    Node(int value)
    {
        data = value;
        link = NULL;
    }
};

// Global top pointer
Node *top = NULL;

// Check whether stack is empty
bool isEmpty()
{
    return (top == NULL);
}

// Push operation
void push(int value)
{
    Node *newNode = new Node(value);

    newNode->link = top;
    top = newNode;

    cout << value << " pushed into stack." << endl;
}

// Pop operation
void pop()
{
    if (isEmpty())
    {
        cout << "Stack Underflow!" << endl;
        return;
    }

    Node *temp = top;
    cout << "Deleted element: " << top->data << endl;

    top = top->link;
    delete temp;
}

// Peek operation
void peek()
{
    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Top element: " << top->data << endl;
    }
}

// Display stack
void display()
{
    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
        return;
    }

    Node *temp = top;

    cout << "Stack elements: ";

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }

    cout << endl;
}

// Main function
int main()
{
    int choice, value;

    do
    {
        cout << "\n===== STACK MENU =====\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            push(value);
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