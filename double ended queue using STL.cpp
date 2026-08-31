#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);     
    q.push(30);     
    q.push(40);
    q.push(50);
    cout << "Front element is: " << q.front() << endl;
    cout << "Rear element is: " << q.back() << endl;
    q.pop();
    q.pop();
    q.pop();
    cout << "Front element is: " << q.front() << endl;
    cout << "Rear element is: " << q.back() << endl;
    cout << "Queue elements are: ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
}
return 0;
}