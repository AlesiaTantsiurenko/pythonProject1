#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251");
    int random_number = rand()%10 + 1;
    int users_number = 0;
    int n = 0;
    int score = 0;
    while (n < 5) {
        cout << "Введите любое число в диапазоне [1:10]: ";
        cin >> users_number;
        while ((0 >= users_number) || (users_number >= 10)) {
            cout << "Число должно находиться в диапазоне [0:10]!Ввдите заново число ";
            cin >> users_number;
        }
        if (n == 4) {
                cout << "Вы проиграли" << endl;
                score = score + 1;
        }
        else if (users_number == random_number) {
                cout << "Да, вы угадали!" << endl;
                break;
        }
        else if (users_number < random_number) {
                cout << "Введенное число меньше загаданного, берите выше!" << endl;
                score = score + 1;
        }
        else if (users_number > random_number) {
                cout << "Введенное число болше загаданного, берите ниже!" << endl;
                score = score + 1;
        }
        n++;
    }
    cout << "Вы сделали " << score << " попыток(-ку) из пяти.";


    }