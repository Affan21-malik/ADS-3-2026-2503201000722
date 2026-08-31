#include <iostream>
using namespace std;

#define size 5

int dq[size];
int f = -1;
int r = -1;

// Check whether Deque is empty
bool isempty()
{
    if (f == -1)
        return true;
    else
        return false;
}

// Check whether Deque is full
bool isfull()
{
    if ((f == 0 && r == size - 1) || (f == r + 1))
        return true;
    else
        return false;
}

// Insert from Front
void enqueue_front(int x)
{
    if (isfull())
    {
        cout << "Overflow" << endl;
        return;
    }

    if (isempty())
    {
        f = 0;
        r = 0;
    }
    else
    {
        f = (f - 1 + size) % size;
    }

    dq[f] = x;
}

// Insert from Rear
void enqueue_rear(int x)
{
    if (isfull())
    {
        cout << "Overflow" << endl;
        return;
    }

    if (isempty())
    {
        f = 0;
        r = 0;
    }
    else
    {
        r = (r + 1) % size;
    }

    dq[r] = x;
}

// Delete from Front
void dequeue_front()
{
    if (isempty())
    {
        cout << "Underflow" << endl;
        return;
    }

    cout << "Deleted from front: " << dq[f] << endl;

    if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        f = (f + 1) % size;
    }
}

// Delete from Rear
void dequeue_rear()
{
    if (isempty())
    {
        cout << "Underflow" << endl;
        return;
    }

    cout << "Deleted from rear: " << dq[r] << endl;

    if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        r = (r - 1 + size) % size;
    }
}

// Display Deque
void display()
{
    if (isempty())
    {
        cout << "Deque is empty" << endl;
        return;
    }

    cout << "Deque: ";

    int i = f;

    while (true)
    {
        cout << dq[i] << " ";

        if (i == r)
            break;

        i = (i + 1) % size;
    }

    cout << endl;
}

int main()
{
    enqueue_front(10);
    enqueue_front(20);
    enqueue_front(30);
    enqueue_rear(40);
    enqueue_rear(50);

    display();

    dequeue_front();
    dequeue_rear();
    dequeue_rear();
    dequeue_front();

    display();

    dequeue_front();

    display();

    return 0;
}