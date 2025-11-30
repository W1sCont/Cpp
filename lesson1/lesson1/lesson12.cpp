#include <iostream>

template <typename T, typename T1>
void print(T value, T1 value2);

template <typename T, typename T2>
T maxArr(T arr[], T2 size);

template <typename T, typename T2>
T maxArr2(T arr[][5], T2 size);

template <typename T>
void displayArrat(T arr[], int size);

template <typename T, int N>
void swapFirstAndLast(T (&arr)[N]);

int main() {

	/*print(11, 21.3);
	print("Hello", 23);*/

	// task 1
	/*srand(time(NULL));
	const int size = 5;
	int array[size];
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100;
		std::cout << array[i] << ' ';
	}
	std::cout << std::endl;
	std::cout << maxArr(array, size) << std::endl;

	std::cout << std::endl;

	int array2[size][size];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			array2[i][j] = rand() % 100;
			std::cout << array2[i][j] << ' ';
		}
	}
	std::cout << std::endl;

	std::cout << maxArr2(array2, size) << std::endl;*/

	// task 2
	srand(time(NULL));
	const int size = 5;
	int array[size];
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100;
	}
	displayArrat(array, size);
	std::cout << std::endl;

	swapFirstAndLast(array);
	displayArrat(array, size);
	std::cout << std::endl;



	return 0;
}

template <typename T, typename T1>
void print(T value, T1 value2) {
	std::cout << value << ' ' << value2 << std::endl;
}

template <typename T, typename T2>
T maxArr(T arr[], T2 size) {
	T max = arr[0];
	for (int i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}

template <typename T, typename T2>
T maxArr2(T arr[][5], T2 size) {
	T max = arr[0][0];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
			}
		}
	}
	return max;
}

template <typename T>
void displayArrat(T arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}

template <typename T, int N>
void swapFirstAndLast(T (&arr)[N]) {
	T temp = 0;
	temp = arr[0];
	arr[0] = arr[N - 1];
	arr[N - 1] = temp;
}