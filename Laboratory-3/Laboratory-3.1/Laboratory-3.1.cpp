#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string currentLocation, destination;
    cout << "Введите текущее местоположение (дом): ";
    getline(cin, currentLocation);
    cout << "Введите пункт назначения (университет): ";
    getline(cin, destination);

    string transportationMethod;
    cout << "Выберите метод транспортировки (пешком, автомобилем, общественным транспортом и т. д.): ";
    getline(cin, transportationMethod);

    if (transportationMethod == "пешком") {
        cout << "1. Идите прямо по улице до перекрестка.\n";
        cout << "2. Поверните налево на перекрестке.\n";
        cout << "3. Продолжайте идти до университета.\n";
    }
    else if (transportationMethod == "автомобиль") {
        cout << "1. Сядьте в автомобиль.\n";
        cout << "2. Покиньте проезд.\n";
        cout << "3. Поверните направо на первом светофоре.\n";
        cout << "4. Продолжайте движение до университета.\n";
    }
    else if (transportationMethod == "общественный транспорт") {
        cout << "1. Подойдите к остановке общественного транспорта.\n";
        cout << "2. Садитесь на автобус №123.\n";
        cout << "3. Езжайте до остановки университета.\n";
    }
    else {
        cout << "Выбранный метод транспортировки не поддерживается.\n";
        return 1;
    }

    cout << "Прибыли в университет. Маршрут завершен.\n";

    return 0;
}
