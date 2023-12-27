#include "OutputModule.h"
#include <iostream>

namespace OutputModule {
    void displayResult(int result) {
        std::cout << "Результат: " << result << std::endl;
    }

    void displayErrorMessage() {
        std::cout << "Ошибка!" << std::endl;
    }
}
