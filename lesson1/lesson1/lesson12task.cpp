#include <iostream>

int findMax(int a, int b);
double findMax(double a, double b);
std::string findMax(std::string s1, std::string s2);
template <typename T>
T findMaxTemp(T a, T b);

int main() {
	int a = 2, b = 4;
	double c = 3.5, d = 1.2;
	std::string s1 = "Hello", s2 = "World";

	std::cout << findMax(a, b) << std::endl;
	std::cout << findMax(c, d) << std::endl;
	std::cout << findMax(s1, s2) << std::endl;
	std::cout << std::endl;

	std::cout << "template " << std::endl;
	std::cout << findMaxTemp(a, b) << std::endl;
	std::cout << findMaxTemp(c, d) << std::endl;
	std::cout << findMaxTemp(s1, s2) << std::endl;

	return 0;
}

int findMax(int a, int b) {
	return (a > b) ? a : b;
}

double findMax(double a, double b) {
	return (a > b) ? a : b;
}

std::string findMax(std::string s1, std::string s2) {
	return (s1 > s2) ? s1 : s2;
}

template <typename T>
T findMaxTemp(T a, T b) {
	return (a > b) ? a : b;
}