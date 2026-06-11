#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    if (op == '+') {
        cout << "Addition = " << a + b << endl;
    }
    else if (op == '-') {
        cout << "Subtraction = " << a - b << endl;
    }
    else if (op == '*') {
        cout << "Multiplication = " << a * b << endl;
    }
    else if (op == '/') {
        if (b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division by zero is not allowed!" << endl;
    }
    else {
        cout << "Invalid Operator" << endl;
    }

    return 0;
}