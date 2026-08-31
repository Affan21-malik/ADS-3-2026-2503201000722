#include <iostream>
using namespace std;

class CircularQueue {
    struct Node {
        int data;
        Node* next;

        Node(int value) {
            data = value;
            next = nullptr;
        }
    };

    Node* front;
    Node* rear;

public:
    CircularQueue() {
        front = nullptr;
        rear = nullptr;
    }


    void enqueue(int value) {
        Node* newNode = new Node(value);

        // Queue is empty
        if (front == nullptr) {
            front = rear = newNode;
            rear->next = front;   // circular link
        }
        else {
            rear->next = newNode;
            rear = newNode;
            rear->next = front;   // maintain circularity
        }

        cout << value << " inserted\n";
    }

  
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is Empty\n";
            return;
        }

       
        if (front == rear) {
            cout << front->data << " deleted\n";
            delete front;
            front = rear = nullptr;
        }
        else {
            Node* temp = front;

            cout << front->data << " deleted\n";

            front = front->next;
            rear->next = front;

            delete temp;
        }
    }

    
    void display() {
        if (front == nullptr) {
            cout << "Queue is Empty\n";
            return;
        }

        Node* temp = front;

        cout << "Queue: ";

        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != front);

        cout << endl;
    }
};

int main() {

    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(50);
    q.enqueue(60);

    q.display();

    return 0;
}