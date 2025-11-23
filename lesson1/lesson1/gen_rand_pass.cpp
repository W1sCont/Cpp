#include <iostream>
#include <random>
#include <chrono>

std::string randomPassword(int len);
std::string randPassword(int len);
	

int main() {

	std::cout << randomPassword(23) << std::endl;

	std::cout << randPassword(23) << std::endl;

	return 0;
}


std::string randomPassword(int len) {
	std::string result{};
	int randomIndex{};
	const std::string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::mt19937 generator(seed);
	std::uniform_int_distribution<int> distribution(0, chars.size() - 1);
	for (int i = 0; i < len; i++) {
		randomIndex = distribution(generator);
		result += chars[randomIndex];
	}
	return result;
}


std::string randPassword(int len) {
	const std::string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	std::string result{};
	char randomChar{};
	srand(time(NULL));
	for (int i = 0; i < len; i++) {
		int randIndex = rand() % (chars.size() - 1);
		randomChar = chars[randIndex];
		result += randomChar;
	}
	return result;
}