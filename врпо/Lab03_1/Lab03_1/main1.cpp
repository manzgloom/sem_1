#include <iostream>
using namespace std;

int main() {
    char symbol;
    int number;

    do {
        setlocale(LC_CTYPE, "Russian");
        cout << "Выберите вариант использования:" << endl;
        cout << "1 - определение разницы значений кодов в ASCII буквы в прописном и строчном написании (для символов латинского алфавита)" << endl;
        cout << "2 - определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании (для символов русского алфавита)" << endl;
        cout << "3 - вывод в консоль кода символа, соответствующего введенной цифре" << endl;
        cout << "4 - выход из программы" << endl;
        cin >> number;

        switch (number) {
        case 1:
            cout << "Введите символ: ";
            cin >> symbol;
            if (symbol >= 'A' && symbol <= 'Z') {
                char lowercase = symbol + 20;
                int raz = lowercase - symbol;
                cout << "Разница значений кодов в ASCII буквы в прописном и строчном написании: " << raz << endl;
            }
            else if (symbol >= 'a' && symbol <= 'z') {
                char uppercase = symbol - 20;
                int raz = symbol - uppercase;
                cout << "Разница значений кодов в ASCII буквы в прописном и строчном написании: " << raz << endl;
            }
            else {
                cout << "Введен символ, не являющийся латинской буквой." << endl;
            }
            break;

        case 2:
            cout << "Введите символ: ";
            cin >> symbol;
            if (symbol >= 'А' && symbol <= 'Я') {
                char lowercase = symbol + 20;
                int raz = lowercase - symbol;
                cout << "Разница значений кодов в Windows-1251 буквы в прописном и строчном написании: " << raz << endl;
            }
            else if (symbol >= 'а' && symbol <= 'я') {
                char uppercase = symbol - 20;
                int raz = symbol - uppercase;
                cout << "Разница значений кодов в Windows-1251 буквы в прописном и строчном написании: " << raz << endl;
            }
            else {
                cout << "Введен символ, не являющийся русской буквой." << endl;
            }
            break;

        case 3:
            cout << "Введите цифру: ";
            cin >> symbol;
            if (symbol >= '0' && symbol <= '9') {
                int code = symbol;
                cout << "Код символа: " << code << endl;
            }
            else {
                cout << "Введен символ, не являющийся цифрой." << endl;
            }
            break;

        case 4:
            cout << "Программа завершена" << endl;
            break;

        default:
            cout << "Неверный выбор варианта использования." << endl;
            break;
        }

        cout << endl;
    } while (number != 4);

    return 0;
}