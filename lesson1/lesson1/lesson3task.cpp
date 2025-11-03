#include <iostream>

int main() {

	int num;
	std::cout << "For task enter number 1 or 2: ";
	std::cin >> num;

	switch (num) {
		case 1 :

			// task 1

			int ram;
			std::cout << "Enter your RAM: ";
			std::cin >> ram;
			// 1
			std::cout << ((ram < 16) ? "PC upgrade needed" : "Let's play game") << std::endl;
			// 2
			if (ram >= 16)
				std::cout << "Let's play game" << std::endl;
			else
				std::cout << "PC upgrade needed" << std::endl;

			break;

		case 2:
			// task 2

			double temp;
			std::cout << "Enter your temperature: ";
			std::cin >> temp;
			// 1
			std::cout << ((temp > 36.1 && temp < 36.9) ? "OK" : "Not OK") << std::endl;
			// 2
			if (temp > 36.1 && temp < 36.9)
				std::cout << "OK" << std::endl;
			else
				std::cout << "Not OK" << std::endl;

			break;

		default:
			std::cout << "incorect number" << std::endl;
	}

}