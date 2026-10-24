#include <iostream>
using namespace std;

class Calculator {
private: 
    double num1;
    double num2;

public:
    void setNumbers(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }

    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double multiply() {
        return num1 * num2;
    }

    void divide() {
        if (num2 != 0) {
            cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
};

int main() {
    Calculator calc; 
    double n1, n2;
    char operation;

    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter the second number: ";
    cin >> n2;

    calc.setNumbers(n1, n2);

    switch (operation) {
        case '+':
            cout << "Result: " << n1 << " + " << n2 << " = " << calc.add() << endl;
            break;
        case '-':
            cout << "Result: " << n1 << " - " << n2 << " = " << calc.subtract() << endl;
            break;
        case '*':
            cout << "Result: " << n1 << " * " << n2 << " = " << calc.multiply() << endl;
            break;
        case '/':
            calc.divide();
            break;
        default:
            cout << "Error: Invalid operator entered." << endl;
    }

    return 0;
}