#include "OutputModule.h"
#include <iostream>

namespace OutputModule {
    void displayResult(int result) {
        std::cout << "���������: " << result << std::endl;
    }

    void displayErrorMessage() {
        std::cout << "������!" << std::endl;
    }
}
