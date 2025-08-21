#include <iostream>
using namespace std;

class Calculator {
public:
    double a, b;
    string op;

    double calc() {
        if (op == "add") {
            return a + b;
        }
        else if (op == "sub") {
            return a - b;
        }
        else if (op == "mul") {
            return a * b;
        }
        else if (op == "div") {
            if (b != 0)
                return a / b;
            else {
                cout << "cannot divide by zero" << endl;
                return 0;
            }
        }
        else {
            cout << "wrong operation" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator c;
    cout << "enter first number: ";
    cin >> c.a;
    cout << "enter second number: ";
    cin >> c.b;
    cout << "enter operation(add, sub, mul, div): ";
    cin >> c.op;

    double ans = c.calc();
    cout << "answer = " << ans << endl;

    return 0;
}
