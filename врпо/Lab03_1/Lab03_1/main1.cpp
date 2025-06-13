#include <iostream>
using namespace std;

int main() {
    char symbol;
    int number;

    do {
        setlocale(LC_CTYPE, "Russian");
        cout << "�������� ������� �������������:" << endl;
        cout << "1 - ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ��������� (��� �������� ���������� ��������)" << endl;
        cout << "2 - ����������� ������� �������� ����� � Windows-1251 ����� � ��������� � �������� ��������� (��� �������� �������� ��������)" << endl;
        cout << "3 - ����� � ������� ���� �������, ���������������� ��������� �����" << endl;
        cout << "4 - ����� �� ���������" << endl;
        cin >> number;

        switch (number) {
        case 1:
            cout << "������� ������: ";
            cin >> symbol;
            if (symbol >= 'A' && symbol <= 'Z') {
                char lowercase = symbol + 20;
                int raz = lowercase - symbol;
                cout << "������� �������� ����� � ASCII ����� � ��������� � �������� ���������: " << raz << endl;
            }
            else if (symbol >= 'a' && symbol <= 'z') {
                char uppercase = symbol - 20;
                int raz = symbol - uppercase;
                cout << "������� �������� ����� � ASCII ����� � ��������� � �������� ���������: " << raz << endl;
            }
            else {
                cout << "������ ������, �� ���������� ��������� ������." << endl;
            }
            break;

        case 2:
            cout << "������� ������: ";
            cin >> symbol;
            if (symbol >= '�' && symbol <= '�') {
                char lowercase = symbol + 20;
                int raz = lowercase - symbol;
                cout << "������� �������� ����� � Windows-1251 ����� � ��������� � �������� ���������: " << raz << endl;
            }
            else if (symbol >= '�' && symbol <= '�') {
                char uppercase = symbol - 20;
                int raz = symbol - uppercase;
                cout << "������� �������� ����� � Windows-1251 ����� � ��������� � �������� ���������: " << raz << endl;
            }
            else {
                cout << "������ ������, �� ���������� ������� ������." << endl;
            }
            break;

        case 3:
            cout << "������� �����: ";
            cin >> symbol;
            if (symbol >= '0' && symbol <= '9') {
                int code = symbol;
                cout << "��� �������: " << code << endl;
            }
            else {
                cout << "������ ������, �� ���������� ������." << endl;
            }
            break;

        case 4:
            cout << "��������� ���������" << endl;
            break;

        default:
            cout << "�������� ����� �������� �������������." << endl;
            break;
        }

        cout << endl;
    } while (number != 4);

    return 0;
}