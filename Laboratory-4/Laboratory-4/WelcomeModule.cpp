#include "WelcomeModule.h"
#include <iostream>

namespace WelcomeModule {
	void postWelcomeMesagge() {
		std::cout << "0 - ���� ���������� �������� " << std::endl;
		std::cout << "1 - ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ��������� ���� " << std::endl;
		std::cout << "2 - ����������� ������� �������� ����� � Windows-1251 ����� � ��������� � �������� ��������� ���" << std::endl;
		std::cout << "3 - ����� � ������� ���� �������, ���������������� ��������� �����" << std::endl;
		std::cout << "4 - ����� �� ���������" << std::endl;
	}
}