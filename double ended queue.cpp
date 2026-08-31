#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_front(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.push_back(50);

    cout << "\nElements in dq: " << dq.size();

    cout << "\nFront element is " << dq.front();
    cout << "\nRear element is " << dq.back();

    dq.pop_front();
    dq.pop_back();
    dq.pop_front();

    cout << "\nAfter pop front element is " << dq.front();
    cout << "\nAfter pop rear element is " << dq.back();

    cout << "\nDouble ended queue elements are: ";

    while (!dq.empty())
    {
        cout << dq.front() << " ";
        dq.pop_front();
    }

    return 0;
}