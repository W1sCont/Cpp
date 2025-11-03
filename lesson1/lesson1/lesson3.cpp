#include <iostream>

int main() {

	// task 1
	/*int x, y;
	std::cout << "Enter x: ";
	std::cin >> x;

	std::cout << "Enter y: ";
	std::cin >> y;

	int sum = x + y;
	int av = sum / 2;
	std::cout << "sum= " << sum << std::endl;
	std::cout << "av= " << av << std::endl;*/

	// task 2

	/*int x, y, c;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter y: ";
	std::cin >> y;

	c = x;
	x = y;
	y = c;

	std::cout << "Enter x: " << x << std::endl;
	std::cout << "Enter y: " << y << std::endl;
	*/


	// if

	/*int x = 10, y = 5;

	if (x > y) {
		std::cout << "x > y" << std::endl;

	}*/

	// task 1
	/*int x, y;
	std::cout << "Enter x: ";
	std::cin >> x;

	std::cout << "Enter y: ";
	std::cin >> y;

	if (x > y) {
		std::cout << y;
	}
	else if (x < y) {
		std::cout << x;
	}
	else {
		std::cout << "x == y";
	}*/


	// task 2

	/*int height, zir;
	std::cout << "Enter zir %: ";
	std::cin >> zir;

	std::cout << "Enter height sm: ";
	std::cin >> height;

	if (((170 <= height) && (height <= 200)) && (zir == 100))
		std::cout << "passed" << std::endl;
	else
		std::cout << "failed" << std::endl;*/


	/*int a = 5, b = 10;*/
	/*int max = 0, min = 0;

	max = (a > b) ? a : b;
	std::cout << max << std::endl;

	min = (a < b) ? a : b;
	std::cout << min << std::endl;*/

	// std::cout << ((a > b) ? "a > b" : (a < b) ? "a < b" : "a = b") << std::endl;


	// task 3
	
	int number;
	std::cout << "Enter number: ";
	std::cin >> number;

	std::cout << ((number > 0) ? "dodatnie" : (number < 0) ? "vidjemne" : "doriwniuje 0") << std::endl;




}