#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "enter a number: ";
    cin >> a;

    int n;
    if (a % 2 == 0) {
        n = a - 1;
    } else {
        n = a;
    }

    for (int i = 1; i <= n; i++) {
        cout << (2 * i - 1);
        if (i != n) {
            cout << ", ";
        }
    }

    return 0;
}
