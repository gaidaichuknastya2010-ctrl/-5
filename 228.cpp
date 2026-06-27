#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    int level = 1;

    cout << " гра: привид за дверми " << endl;
    cout << " виберай двері пробуючи не натрапити на привида" << endl;

    while (level <= 10) {
        int g = rand() % 3 + 1;
        int choice;

        cout << "\n Рівень " << level << endl;

        cout << "  _____     _____     _____ " << endl;
        cout << " |     |   |     |   |     | " << endl;
        cout << " |  0  |   |  0  |   |  0  | " << endl;
        cout << " |--   |   |--   |   |--   | " << endl;
        cout << " |     |   |     |   |     | " << endl;
        cout << " |_____|   |_____|   |_____| " << endl;
        cout << "    1         2         3    " << endl;


        cout << "Вибери двері (1, 2 або 3): ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Помилка! Введи число 1, 2 або 3." << endl;
            continue;
        }

        if (1 > choice > 3) {
            cout << "Немає таких дверей!" << endl;
            continue;
        }

        if (choice == g) {
            cout << "\n Привид! Рівень анульовано." << endl;
            level = 1;
        }
        else {
            cout << "\n за дверми " << choice << " порожні." << endl;
            level++;
        }
    }

    cout << "\nВІТАЮ! Ти вижив!" << endl;
    return 0;
}