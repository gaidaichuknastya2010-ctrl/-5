#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    int N = rand() % 1000 + 1;

    int number;
    int s = 0;
    int maxs = 10;
    int start = 0;

    cout << "Гра відгадач число" << endl;

    cout << "Почати гру? (0 - так, 1 - ні): ";
    cin >> start;

    if (start == 1) {
        return 0;
    }

    else {

        cout << "У тебе є всього 10 спроб щоб вгадати число від 1 до 1000." << endl;

        while (s < maxs) {
            cout << "\nЗалишилось спроб: " << (maxs - s) << endl;
            cout << "Введи число: ";
            cin >> number;

            if (cin.fail()) {
                cout << "Помилка! Вводь тільки цифри." << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }

            s = s + 1;

            if (number > N) {
                cout << "Забагато" << endl;
            }
            else if (number < N) {
                cout << "Холодно. Спробуй більше число." << endl;
            }
            else {
                cout << "Ти вгадав число за " << s << " спроб! Маладец" << endl;
                return 0;
            }
        }

        cout << "\nТи програв! Мухахаххах! Число було: " << N << endl;

    }

    return 0;
}
