#include <iostream>

void arr_new(int* &arr, int &len);
void new_arr_cons(int len);
void arr_dell_minus(int* &arr, int &len);

int main() {

	// task 1
	/*int len = 10;
	int* numArr = new int [len];
	int value = 0, count = 0;

	while (true) {
		std::cout << "Enter number or 0 for end: ";
		std::cin >> value;
		if (value == 0)
			break;

		numArr[count] = value;
		count++;

		if (count == len) {
			len += 10;
			int* numArr1 = new int[len];
			for (int j = 0; j < count; j++) {
				numArr1[j] = numArr[j];
			}
			delete [] numArr;
			numArr = numArr1;
			numArr1 = nullptr;
		}
	
	}

	for (int i = 0; i < count; i++) {
		std::cout << numArr[i] << ' ';
	}
	std::cout << std::endl;

	delete[] numArr;
	numArr = nullptr;*/

	// task 2 not complet
	/*srand(time(NULL));
	int len = 10;
	int* arr = new int [len];
	for (int i = 0; i < len; i++) {
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;

	arr_new(arr, len);

	for (int i = 0; i < len; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	
	delete[] arr;*/

	// task 3
	/*int len = 0;
	std::cout << "Enter len: ";
	std::cin >> len;
	new_arr_cons(len);*/

	// task 4

	int len = 15;
	int* arr = new int[len];

	for (int i = 0; i < len; i++) {
		arr[i] = rand() % 20 + (- 5);
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;

	arr_dell_minus(arr, len);

	for (int i = 0; i < len; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;

	delete[] arr;

	return 0;
}

void arr_new(int* &arr, int &len) {
	int count = 0;
	int* new_arr = new int[len];
	for (int i = 0; i < len; i++) {
		if (arr[i] % 2 != 0 && arr[i] % 3 != 0) {
			new_arr[count] = arr[i];
			count++;
		}
	}
	delete[] arr;
	arr = new_arr;
	len = count;
}

void new_arr_cons(int len) {
	srand(time(NULL));
	int* arr = new int[len];
	for (int i = 0; i < len; i++) {
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	delete[] arr;
}

void arr_dell_minus(int* &arr, int &len) {
	int* temp_arr = new int[len];
	int j = 0;
	for (int i = 0; i < len; i++) {
		if (arr[i] > 0) {
			temp_arr[j] = arr[i];
			j++;
		}
	}
	len = j;
	delete[] arr;
	arr = temp_arr;
}