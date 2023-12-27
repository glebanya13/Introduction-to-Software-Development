#pragma once
#include <vector>
using namespace std;

namespace InputModule {
    char getUserChoice();
    void getEnglishChars(unsigned char& chH, unsigned char& chL);
    void getRussianChars(unsigned char& chH, unsigned char& chL);
    void getDigit(char& num);
    void getCodes(vector<unsigned char>& codes);
}