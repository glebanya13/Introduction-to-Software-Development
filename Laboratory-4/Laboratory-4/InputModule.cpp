#include "InputModule.h"
#include <iostream>
#include <vector>

using namespace std;

namespace InputModule {
    char getUserChoice() {
        char choice;
        std::cout << "¬ведите ваш выбор: ";
        std::cin >> choice;
        return choice;
    }

    void getEnglishChars(unsigned char& chH, unsigned char& chL) {
        std::cout << "¬ведите символ на английском €зыке в прописном и строчном варианте: ";
        std::cin >> chH >> chL;
    }


    void getRussianChars(unsigned char& chH, unsigned char& chL) {
        std::cout << "¬ведите символ на русском €зыке в прописном и строчном варианте: ";
        std::cin >> chH >> chL;
    }

    void getDigit(char& num) {
        std::cout << "¬ведите цифру: ";
        std::cin >> num;
    }

    void getCodes(vector<unsigned char>& codes) {
        int codeCount;
        cout << "¬ведите количество символов: ";
        cin >> codeCount;

        for (int i = 0; i < codeCount; i++) {
            unsigned char code;
            cout << "¬ведите символ: ";
            cin >> code;
            codes.push_back(code);
        }
    }
}
