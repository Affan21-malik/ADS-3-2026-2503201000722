#include <iostream>
using namespace std;

void toh(int n, char source, char destination, char mediator)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << source
             << " to rod " << destination << endl;
        return;
    }

    // Move n-1 disks from source to mediator
    toh(n - 1, source, mediator, destination);

    // Move nth disk from source to destination
    cout << "Move disk " << n << " from rod " << source
         << " to rod " << destination << endl;

    // Move n-1 disks from mediator to destination
    toh(n - 1, mediator, destination, source);
}

int main()
{
    int n; // Number of disks

    cout << "\nEnter no of disk\t";
    cin >> n;

    toh(n, 'A', 'C', 'B');

    return 0;
}