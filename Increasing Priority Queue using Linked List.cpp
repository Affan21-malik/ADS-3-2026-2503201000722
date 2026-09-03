#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;

void insert(int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;

    if (front == NULL || x < front->data) {
        newNode->next = front;
        front = newNode;
    }
    else {
        Node* temp = front;

        while (temp->next != NULL && temp->next->data <= x)
            temp = temp->next;

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteElement() {
    if (front == NULL) {
        cout << "Queue is Empty\n";
        return;
    }

    Node* temp = front;
    cout << "Deleted: " << temp->data << endl;
    front = front->next;
    delete temp;
}

void display() {
    Node* temp = front;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insert(30);
    insert(10);
    insert(20);

    display();

    deleteElement();
    display();

    return 0;
}