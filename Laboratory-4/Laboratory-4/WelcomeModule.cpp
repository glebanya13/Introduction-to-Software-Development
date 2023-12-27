#include "WelcomeModule.h"
#include <iostream>

namespace WelcomeModule {
	void postWelcomeMesagge() {
		std::cout << "0 - ввод нескольких символов " << std::endl;
		std::cout << "1 - определение разницы значений кодов в ASCII буквы в прописном и строчном написании АНГЛ " << std::endl;
		std::cout << "2 - определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании РУС" << std::endl;
		std::cout << "3 - вывод в консоль кода символа, соответствующего введенной цифре" << std::endl;
		std::cout << "4 - выход из программы" << std::endl;
	}
}