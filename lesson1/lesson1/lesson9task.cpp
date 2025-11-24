#include <iostream>
#include <random>
#include <chrono>

void sortedUp(int* arr, int SIZE);
void sortedDown(int* arr, int SIZE);

int main() {

	const int SIZE = 10;
	int arr[SIZE];

	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::mt19937 generator(seed);
	std::uniform_int_distribution<int> distribution(0, 100);

	for (int i = 0; i < SIZE; i++) {
		arr[i] = distribution(generator);
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;

	sortedUp(arr, SIZE);
	std::cout << std::endl;
	for (auto element : arr) {
		std::cout << element << ' ';
	}
	std::cout << std::endl;

	/*sortedDown(arr, SIZE);
	std::cout << std::endl;
	for (auto element : arr) {
		std::cout << element << ' ';
	}*/

	return 0;
}

void sortedUp(int* arr, int SIZE) {

	int temp;
	for (int i = 0; i < SIZE; i++) {
		for (int j = i + 1; j < SIZE; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void sortedDown(int* arr, int SIZE) {
	int temp;
	for (int i = 0; i < SIZE; i++) {
		for (int j = i + 1; j < SIZE; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}