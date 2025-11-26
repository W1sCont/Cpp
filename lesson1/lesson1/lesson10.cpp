#include <iostream>

void doubleValue(int& number);
int max(int a, int b);
int max(int a, int b, int c);
void printMessage(std::string message = "Hello, world!");
void displayOrderDetails(std::string itemName, double price, bool includeTax = false);

int main() {
	// task 1
	/*int value = 230;
	doubleValue(value);
	std::cout << "Result: " << value << std::endl;*/

	// task 2
	/*std::cout << "2: " << max(3, 10) << std::endl;
	std::cout << "3: " << max(5, 4, 12) << std::endl;*/

	// task 3
	/*printMessage();
	printMessage("task");*/

	// task 4

	displayOrderDetails("ananas", 20, 1);
	displayOrderDetails("ananas", 20);

	return 0;
}

void doubleValue(int& number) {
	number -= 100;
}

int max(int a, int b) {
	return (a > b) ? a : b;
}

int max(int a, int b, int c) {
	int result{};
	if (a > b && a > c)
		result = a;
	else if (b > a && b > c)
		result = b;
	else
		result = c;

	return result;
}

void printMessage(std::string message) {
	std::cout << message << std::endl;
}

void displayOrderDetails(std::string itemName, double price, bool includeTax) {

	if (includeTax) {
		price += price * 0.2;
		std::cout << itemName << ' ' << price << std::endl;
	}
	else 
		std::cout << itemName << ' ' << price << std::endl;
}
