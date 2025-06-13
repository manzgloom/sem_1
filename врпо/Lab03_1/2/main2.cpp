#include <iostream>
using namespace std;

int main() {
    int number;
        setlocale(LC_CTYPE, "Russian");
        cout << "Какое Вы чувствуете недомогание?" << endl;
        cout << "1 - недомогание отсутствует" << endl;
        cout << "2 - совсем легкое, небольшие боли головы" << endl;
        cout << "4 - жар, высокая температура и сильный кашель" << endl;
        cin >> number;

        switch (number) {
        case 1:
            cout << "Супер! Собирайтесь и идите на работу!";
            break;
        case 2:
            cout << "Советую выпить таблетку/горячего чая и все же сходить на работу)";
            break;
        case 3:
            cout << "Сегодня лучше остаться дома, отдохнуть и выпить лекарство.";
            break;
        case 4:
            cout << "Срочно звоните в скорую!";
            break;
        default:
            cout << "Ошибка: выберите вариант недомогания." << endl;
            break;
    } 
}