#include "InputModule.h"
#include <iostream>
#include <vector>

using namespace std;

namespace InputModule {
    char getUserChoice() {
        char choice;
        std::cout << "������� ��� �����: ";
        std::cin >> choice;
        return choice;
    }

    void getEnglishChars(unsigned char& chH, unsigned char& chL) {
        std::cout << "������� ������ �� ���������� ����� � ��������� � �������� ��������: ";
        std::cin >> chH >> chL;
    }


    void getRussianChars(unsigned char& chH, unsigned char& chL) {
        std::cout << "������� ������ �� ������� ����� � ��������� � �������� ��������: ";
        std::cin >> chH >> chL;
    }

    void getDigit(char& num) {
        std::cout << "������� �����: ";
        std::cin >> num;
    }

    void getCodes(vector<unsigned char>& codes) {
        int codeCount;
        cout << "������� ���������� ��������: ";
        cin >> codeCount;

        for (int i = 0; i < codeCount; i++) {
            unsigned char code;
            cout << "������� ������: ";
            cin >> code;
            codes.push_back(code);
        }
    }
}
