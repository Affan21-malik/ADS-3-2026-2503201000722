#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

int main() {
    cout << gcd(12, 18) << endl;

    return 0;

    
}
/*
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(a == b) {
        return a;
    }

    if(a > b) {
        return gcd(a - b, b);
    }

    return gcd(a, b - a);
}

int main() {
    cout << gcd(12, 18) << endl;

    return 0;
}
*/