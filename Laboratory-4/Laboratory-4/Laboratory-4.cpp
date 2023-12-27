#include <iostream>
#include <windows.h>
#include "InputModule.h"
#include "ProcessingModule.h"
#include "OutputModule.h"
#include "WelcomeModule.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    WelcomeModule::postWelcomeMesagge();

    char choice = InputModule::getUserChoice();

    switch (choice) {
    case '0': {
        vector<unsigned char> codes;
        InputModule::getCodes(codes);
        for (unsigned char code : codes) {
            ProcessingModule::printCodeInfo(code);
        }
        break;
    }
    case '1': {
        unsigned char chH, chL;
        InputModule::getEnglishChars(chH, chL);
        ProcessingModule::option1(chH, chL);
        break;
    }
    case '2': {
        unsigned char chH, chL;
        InputModule::getRussianChars(chH, chL);
        ProcessingModule::option2(chH, chL);
        break;
    }
    case '3': {
        char num;
        InputModule::getDigit(num);
        ProcessingModule::option3(num);
        break;
    }
    case '4':
        std::cout << "До свидания!" << std::endl;
        break;
    default:
        std::cout << "Ошибка: Неверный ввод." << std::endl;
        break;
    }

    return 0;
}
