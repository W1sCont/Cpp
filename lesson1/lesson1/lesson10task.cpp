#include <iostream>

int calculate(int a, int b);
double calculate(double a, double b, double c = 1.0);

int main() {
	int num1 = 20, num2 = 3;
	double a = 2.3, b = 4.1, c = 5.2;

	std::cout << "int " << calculate(num1, num2) << std::endl;
	std::cout << "double 2 " << calculate(a, b) << std::endl;
	std::cout << "double 3 " << calculate(a, b, c) << std::endl;

	return 0;
}

int calculate(int a, int b) {
	return a + b;
}

double calculate(double a, double b, double c) {
	return a * b * c;
}