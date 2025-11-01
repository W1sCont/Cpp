#include <iostream>

int main() {

	//task 7
	/*int value1, value2;
	std::cout << "Enter number 1: ";
	std::cin >> value1;

	std::cout << "Enter number 2: ";
	std::cin >> value2;

	int valueSum = value1 + value2;
	int valueS = valueSum / 2;

	std::cout << "Summa: " << valueSum << std::endl;
	std::cout << "Serednie aryfm: " << valueS << std::endl;*/


	// task 8

	int bankBalans, cash;

	std::cout << "Deposit money to your bank accaunt:" << std::endl;
	std::cin >> bankBalans;
	std::cout << "Enter amount: ";
	std::cin >> cash;

	while (1 > 0) {
	

		if (bankBalans < cash) {
			std::cout << "Insufficient funds" << std::endl;
			std::cout << "Enter another amount" << std::endl;
			std::cin >> cash;

			continue;
		}

		if (bankBalans >= cash) {
			
			std::cout << std::endl;
			std::cout << "You withdraw " << cash << std::endl;
			std::cout << "Available balance: " << (bankBalans -= cash) << std::endl;

			std::cout << std::endl;
			std::cout << "For break enter 0 or Enter another amount: ";
			std::cin >> cash;
		
			if (bankBalans == 0) {
				std::cout << "You withdraw all money";
				break;
			}
		}

		if (cash == 0) {
			break;
		}
	}

	
}