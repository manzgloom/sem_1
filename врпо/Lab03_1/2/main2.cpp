#include <iostream>
using namespace std;

int main() {
    int number;
        setlocale(LC_CTYPE, "Russian");
        cout << "����� �� ���������� �����������?" << endl;
        cout << "1 - ����������� �����������" << endl;
        cout << "2 - ������ ������, ��������� ���� ������" << endl;
        cout << "4 - ���, ������� ����������� � ������� ������" << endl;
        cin >> number;

        switch (number) {
        case 1:
            cout << "�����! ����������� � ����� �� ������!";
            break;
        case 2:
            cout << "������� ������ ��������/�������� ��� � ��� �� ������� �� ������)";
            break;
        case 3:
            cout << "������� ����� �������� ����, ��������� � ������ ���������.";
            break;
        case 4:
            cout << "������ ������� � ������!";
            break;
        default:
            cout << "������: �������� ������� �����������." << endl;
            break;
    } 
}