#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    float num1, num2;
    char op;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите операцию (+, -, *, /): ";
    cin >> op;

    if (op != '+' && op != '-' && op != '*' && op != '/') {
        cout << "Неверная операция. Пожалуйста используйте только +, -, * или /." << endl;
        return 1;
    }

    cout << "Введите второе число: ";
    cin >> num2;

    if (op == '/' && num2 == 0) {
        cout << "Деление на 0 недопустимо!" << endl;    
    }
    if (op == '*' && num2 == 0) {
        cout << "Деление на 0 недопустимо!" << endl;
    }
    if (op == '/' && num1 == 0) {
        cout << "Деление на 0 недопустимо!" << endl;
    }
    if (op == '*' && num1 == 0) {
        cout << "Деление на 0 недопустимо!" << endl;
    }

    else {
        switch (op) {
        case '+':
            cout << "Результат: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Результат: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Результат: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Результат: " << num1 / num2 << endl;
            break;
        }
    }

    return 0;
}