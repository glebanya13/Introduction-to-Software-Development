#include <iostream>
#include <cctype>
#include <Windows.h>
using namespace std;

unsigned char chH;
unsigned char chL;
char num;
int code;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char choice;

    cout << "Добро пожаловать! Выберите опцию:" << endl;
    cout << "1 – определение разницы значений кодов в ASCII буквы в прописном и строчном написании," << endl;
    cout << "2 – определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании," << endl;
    cout << "3 – вывод в консоль кода символа, соответствующего введенной цифре" << endl;
    cout << "4 – выход из программы" << endl;

    cin >> choice;

    switch (choice) {
    case '1':
    {
        cout << "Введите символ на английском языке в прописном и строчном варианте: ";
        cin >> chH;
        cin >> chL;
        if (chH >= 'A' && chH <= 'z' && chL >= 'A' && chL <= 'z') {
            int diff = chH - chL;
            cout << "Разница значений кодов: " << diff << endl;
        }
        else {
            cout << "Ошибка!";
        }
        break;
    }
    case '2':
    {
        cout << "Введите символ на русском языке в прописном и строчном варианте: ";
        cin >> chH;
        cin >> chL;
        if (chH >= 0xc0 && chH <= 0xff && chL >= 0xc0 && chL <= 0xff) {
            int diff = chH - chL;
            cout << "Разница значений кодов: " << diff << endl;
        }
        else {
            cout << "Ошибка!";
        }
        break;
    }
    case '3':
    {
        cout << "Введите цифру: ";
        cin >> num;
        if (num >= '0' && num <= '9') {
            code = static_cast<int>(num);
            cout << "Код элемента: " << code << endl;
        }
        else {
            cout << "Ошибка!" << endl;
        }
        break;
    }
    case '4':
        cout << "До свидания!" << endl;

        break;
    default:
        cout << "Ошибка: Неверный ввод." << endl;

        break;
    }

    return 0;
}