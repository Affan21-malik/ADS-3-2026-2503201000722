#include <iostream>
using namespace std;

class PriorityQueue
{
    int data[100];
    int priority[100];
    int n;

public:

    PriorityQueue()
    {
        n = 0;
    }

    // Insert element with priority
    void enqueue(int x, int p)
    {
        if (n == 100)
        {
            cout << "Priority Queue Overflow\n";
            return;
        }

        data[n] = x;
        priority[n] = p;
        n++;

        cout << "Element inserted successfully\n";
    }

    // Delete highest priority element
    void dequeue()
    {
        if (n == 0)
        {
            cout << "Priority Queue Underflow\n";
            return;
        }

        // Find highest priority
        int pos = 0;

        for (int i = 1; i < n; i++)
        {
            if (priority[i] > priority[pos])
            {
                pos = i;
            }
        }

        cout << "Deleted Element = " << data[pos]
             << " Priority = " << priority[pos] << endl;

        // Shift elements
        for (int i = pos; i < n - 1; i++)
        {
            data[i] = data[i + 1];
            priority[i] = priority[i + 1];
        }

        n--;
    }

    // Display queue
    void display()
    {
        if (n == 0)
        {
            cout << "Priority Queue is empty\n";
            return;
        }

        cout << "\nElement\tPriority\n";

        for (int i = 0; i < n; i++)
        {
            cout << data[i] << "\t" << priority[i] << endl;
        }
    }
};

int main()
{
    PriorityQueue pq;

    int x, p;

    // Insert 4 elements
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter element: ";
        cin >> x;

        cout << "Enter priority: ";
        cin >> p;

        pq.enqueue(x, p);
    }

    pq.display();

    cout << "\nDeleting highest priority element:\n";
    pq.dequeue();

    pq.display();

    cout << "\nDeleting highest priority element:\n";
    pq.dequeue();

    pq.display();

    return 0;
}



/*
#include <iostream>
using namespace std;

class PriorityQueue
{
    int data[100];
    int priority[100];
    int n;

public:

    PriorityQueue()
    {
        n = 0;
    }

    // Insert element with priority
    void enqueue(int x, int p)
    {
        if (n == 100)
        {
            cout << "Priority Queue Overflow\n";
            return;
        }

        data[n] = x;
        priority[n] = p;
        n++;

        cout << "Element inserted successfully\n";
    }

    // Delete highest priority element
    void dequeue()
    {
        if (n == 0)
        {
            cout << "Priority Queue Underflow\n";
            return;
        }

        // Find highest priority
        int pos = 0;

        for (int i = 1; i < n; i++)
        {
            if (priority[i] < priority[pos])
            {
                pos = i;
            }
        }

        cout << "Deleted Element = " << data[pos]
             << " Priority = " << priority[pos] << endl;

        // Shift elements
        for (int i = pos; i < n - 1; i++)
        {
            data[i] = data[i + 1];
            priority[i] = priority[i + 1];
        }

        n--;
    }

    // Display queue
    void display()
    {
        if (n == 0)
        {
            cout << "Priority Queue is empty\n";
            return;
        }

        cout << "\nElement\tPriority\n";

        for (int i = 0; i < n; i++)
        {
            cout << data[i] << "\t" << priority[i] << endl;
        }
    }
};

int main()
{
    PriorityQueue pq;

    int x, p;

    // Insert 4 elements
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter element: ";
        cin >> x;

        cout << "Enter priority: ";
        cin >> p;

        pq.enqueue(x, p);
    }

    pq.display();

    cout << "\nDeleting highest priority element:\n";
    pq.dequeue();

    pq.display();

    cout << "\nDeleting highest priority element:\n";
    pq.dequeue();

    pq.display();

    return 0;
}
*/