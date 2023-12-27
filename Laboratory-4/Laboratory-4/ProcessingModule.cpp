// ProcessingModule.cpp
#include "ProcessingModule.h"
#include <iostream>
#include "OutputModule.h" // Добавляем заголовочный файл для использования функций вывода

namespace ProcessingModule {
    void option1(unsigned char chH, unsigned char chL) {
        if ((chH >= 'A' && chH <= 'z') && (chL >= 'A' && chL <= 'z')) {
            int diff = chH - chL;
            OutputModule::displayResult(diff);
        }
        else {
            OutputModule::displayErrorMessage();
        }
    }

    void option2(unsigned char chH, unsigned char chL) {
        if (chH >= 0xc0 && chH <= 0xff && chL >= 0xc0 && chL <= 0xff) {
            int diff = chH - chL;
            OutputModule::displayResult(diff);
        }
        else {
            OutputModule::displayErrorMessage();
        }
    }

    void option3(char num) {
        if (num >= '0' && num <= '9') {
            int code = static_cast<int>(num);
            OutputModule::displayResult(code);
        }
        else {
            OutputModule::displayErrorMessage();
        }
    }

    void printCodeInfo(unsigned char code) {
        if (code >= 'A' && code <= 'z') {
            printf("Это латинская буква %c, код ASCII = %x\n", code, code);
        }
        else if (code >= 192 && code <= 0xff) {
            printf("Это русская буква %c, код Windows-1251 = %x\n", code, code);
        }
        else if (code >= '0' && code <= '9') {
            printf_s("Это цифра %c, код ASCII = %d\n", code, code);
        }
        else {
            printf("Ошибка\n");
        }
    }
}
