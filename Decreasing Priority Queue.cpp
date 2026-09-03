#include <iostream>
using namespace std;

class PriorityQueue {
    int arr[100];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    void insert(int x) {
        arr[size++] = x;
    }

    void deleteElement() {
        if (size == 0) {
            cout << "Queue is Empty\n";
            return;
        }

        int maxIndex = 0;

        for (int i = 1; i < size; i++) {
            if (arr[i] > arr[maxIndex])
                maxIndex = i;
        }

        cout << "Deleted: " << arr[maxIndex] << endl;

        for (int i = maxIndex; i < size - 1; i++)
            arr[i] = arr[i + 1];

        size--;
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;

    pq.insert(30);
    pq.insert(10);
    pq.insert(20);

    pq.display();

    pq.deleteElement();
    pq.display();

    return 0;
}