#include <iostream>

int main() {

	int passengers{}, result{};

	std::cout << "Enter how many passengers are waiting for the bus: ";
	std::cin >> passengers;

	// #1
	/*result = 50 - (passengers % 50);
	std::cout << "Free places: " << result;*/


	// #2
	do {
		passengers -= 50;
	} while (passengers > 0);
	std::cout << "Free places: " << abs(passengers);


	// #3
	/*while (passengers > 0)
		passengers -= 50;
	std::cout << "Free places: " << abs(passengers);*/
	

	// #4
	/*int bus = 50;
	for (; passengers > 0; passengers -= 50) {
		if (passengers < 50)
			bus -= passengers;
	}
	std::cout << "Free places: " << bus << std::endl;*/


	// #5
	/*if (passengers > 0)
		std::cout << 50 - (passengers % 50) << std::endl;
	else
		std::cout << "Enter correct digit!" << std::endl;*/

	return 0;
}