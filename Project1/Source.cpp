#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    float num1, num2;
    char op;

    cout << "������� ������ �����: ";
    cin >> num1;

    cout << "������� �������� (+, -, *, /): ";
    cin >> op;

    if (op != '+' && op != '-' && op != '*' && op != '/') {
        cout << "�������� ��������. ���������� ����������� ������ +, -, * ��� /." << endl;
        return 1;
    }

    cout << "������� ������ �����: ";
    cin >> num2;

    if (op == '/' && num2 == 0) {
        cout << "������� �� 0 �����������!" << endl;    
    }
    if (op == '*' && num2 == 0) {
        cout << "������� �� 0 �����������!" << endl;
    }
    if (op == '/' && num1 == 0) {
        cout << "������� �� 0 �����������!" << endl;
    }
    if (op == '*' && num1 == 0) {
        cout << "������� �� 0 �����������!" << endl;
    }

    else {
        switch (op) {
        case '+':
            cout << "���������: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "���������: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "���������: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "���������: " << num1 / num2 << endl;
            break;
        }
    }

    return 0;
}