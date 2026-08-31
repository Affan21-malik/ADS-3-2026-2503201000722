#include <iostream>
#include <vector>
using namespace std;

class CircularQueue
{
private:
    vector<int> cq;
    int front, rear, size;

public:
    CircularQueue(int n)
    {
        cq.resize(n);
        size = n;
        front = rear = -1;
    }

    void enqueue(int x)
    {
        // Queue full
        if ((rear + 1) % size == front)
        {
            cout << "Queue is full" << endl;
            return;
        }

        // First element
        if (front == -1)
        {
            front = 0;
            rear = 0;
            cq[rear] = x;
        }
        else
        {
            rear = (rear + 1) % size;
            cq[rear] = x;
        }
    }

    void dequeue()
    {
        // Queue empty
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Deleted element is: " << cq[front] << endl;

        // Only one element
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
    }

    void display()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Elements are: ";

        int i = front;

        while (true)
        {
            cout << cq[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % size;
        }

        cout << endl;
    }
};

int main()
{
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(60);
    q.enqueue(70);

    q.display();

    return 0;
}