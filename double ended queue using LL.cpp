#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

class Dequeue
{
private:
    Node *front;
    Node *rear;

public:

    // Constructor
    Dequeue()
    {
        front = NULL;
        rear = NULL;
    }

    // Check if Deque is empty
    bool isempty()
    {
        if (front == NULL)
            return true;
        else
            return false;
    }

    // Insert from Front
    void enqueue_front(int x)
    {
        Node *newNode = new Node(x);

        if (isempty())
        {
            front = rear = newNode;
            rear->next = front;
        }
        else
        {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    // Insert from Rear
    void enqueue_rear(int x)
    {
        Node *newNode = new Node(x);

        if (isempty())
        {
            front = rear = newNode;
            rear->next = front;
        }
        else
        {
            newNode->prev = rear;
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Delete from Front
    void dequeue_front()
    {
        if (isempty())
        {
            cout << "underflow" << endl;
        }
        else
        {
            Node *temp = front;

            if (front == rear)
            {
                front = NULL;
                rear = NULL;
            }
            else
            {
                front = front->next;
                front->prev = NULL;
            }

            cout << "deleted element is " << temp->data << endl;
            delete(temp);
        }
    }

    // Delete from Rear
    void dequeue_rear()
    {
        if (isempty())
        {
            cout << "underflow" << endl;
        }
        else
        {
            Node *temp = rear;

            if (front == rear)
            {
                front = NULL;
                rear = NULL;
            }
            else
            {
                rear = rear->prev;
                rear->next = NULL;
            }

            cout << "deleted element is " << temp->data << endl;
            delete(temp);
        }
    }

    // Display
    void display()
    {
        if (isempty())
        {
            cout << "Deque is empty" << endl;
            return;
        }

        Node *temp = front;

        cout << "Deque: ";

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    // Peek
    int peek()
    {
        return (front->data);
    }
};

int main()
{
    Dequeue dq;

    dq.enqueue_front(10);
    dq.enqueue_front(20);
    dq.enqueue_front(30);
    dq.enqueue_rear(40);
    dq.enqueue_rear(50);

    dq.display();

    cout << "peek element is " << dq.peek() << endl;

    dq.dequeue_front();
    dq.dequeue_rear();
    dq.dequeue_rear();
    dq.dequeue_front();

    dq.display();

    dq.dequeue_front();

    dq.display();

    return 0;
}