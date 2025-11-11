#include <iostream>

int main() {
	// task 3
	// Користувач вводить дві межі діапазону. Порахуйте суму всіх чисел діапазону.

	int num1, num2, num1Const;
	long long resExclusive, resInclusive;

	std::cout << "Range limits" << std::endl;
	std::cout << "Enter number 1: ";
	std::cin >> num1;
	std::cout << "Enter number 2: ";
	std::cin >> num2;

	num1Const = num1;

	if ((num1 == num2) || (num1 > num2)) 
		std::cout << "it's not range limits" << std::endl;

	else {
		// Exclusive
		std::cout << std::endl;
		std::cout << "Exclusive" << std::endl;

		// cycle
		long long result{};
		while (num1 < num2) {
			result += num1;
			num1++;
		}
		std::cout << "Range sum: " << result << std::endl;

		// Gauss
		num1 = num1Const;
		resExclusive = (num2 - num1) * (num1 + num2 - 1) / 2.0f;
		std::cout << "Gauss sum: " << resExclusive << std::endl;


		// Inclusive
		std::cout << std::endl;
		std::cout << "Inclusive" << std::endl;

		// cycle
		num1 = num1Const;
		long long result1{};
		while (num1 <= num2) {
			result1 += num1;
			num1++;
		}
		std::cout << "Range sum: " << result1 << std::endl;

		// Gauss
		num1 = num1Const;
		resInclusive = (num2 - num1 + 1) * (num1 + num2) / 2.0f;
		std::cout << "Gauss sum: " << resInclusive << std::endl;

	}

	return 0;
}