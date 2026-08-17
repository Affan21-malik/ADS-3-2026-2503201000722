#include <iostream>
using namespace std;

int fun2(int);

int fun1(int n)
{
    if (n == 0)
        return 0;

    cout << n;
    return fun2(n - 1);
}

int fun2(int n)
{
    if (n == 0)
        return 0;

    cout << n;
    return fun1(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << fun1(n);

    return 0;
}