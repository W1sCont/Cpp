#include <iostream>

void sum(int a, int b);
int* array(int size);
void arrDynam(int len);
void arrXYZ(int* arr, int len);

int main() {

	/*int* ptr = new int;
	std::cout << ptr << std::endl;
	*ptr = 15;
	std::cout << *ptr << std::endl;

	int num = *ptr;
	std::cout << num << std::endl;

	double* ptrD = nullptr;
	ptrD = new double;
	std::cout << ptrD << std::endl;

	char* ptrC = new char('H');
	std::cout << *ptrC << std::endl;

	int* ptrAge = new int;
	std::cout << "Age: ";
	std::cin >> *ptrAge;

	std::cout << *ptrAge << std::endl;

	delete ptr, ptrD, ptrC, ptrAge;
	ptr = nullptr;
	ptrD = nullptr;
	ptrC = nullptr;
	ptrAge = nullptr;

	ptr = new int(23);
	std::cout << *ptr << std::endl;

	delete ptr;
	ptr = nullptr;*/

	/*int a = 5, b = 6;
	sum(a, b);
	sum(23, 12);*/

	// task 1

	/*int* ptrAge = new int;
	std::cout << "Enter your age: ";
	std::cin >> *ptrAge;

	int b = 10;
	*ptrAge += b;
	std::cout << "Your age after 10 years: " << *ptrAge << std::endl;

	delete ptrAge;*/

	// task 2

	/*double* ptrX = new double;
	double* ptrY = new double;
	double* ptrZ = new double;

	std::cout << "Enter X, Y, Z: ";
	std::cin >> *ptrX;
	std::cin >> *ptrY;
	std::cin >> *ptrZ;

	std::cout << "coords: " << *ptrX << ' ' << *ptrY << ' ' << *ptrZ << std::endl;

	delete ptrX, ptrY, ptrZ;*/


	/*int* ptr = new int(23);
	delete ptr;*/

	/*int* arrptr = new int[10];
	for (int i = 0; i < 10; i++) {
		arrptr[i] = rand() % 10;
		std::cout << arrptr[i] << ' ';
	}
	std::cout << std::endl;

	delete[] arrptr;
	arrptr = nullptr;*/

	/*int size = 0;
	std::cout << "Enter szie: ";
	std::cin >> size;

	int* arr = array(size);

	delete[] arr;*/

	// task 3
	/*int len{};
	std::cout << "Enter arr len: ";
	std::cin >> len;
	arrDynam(len);*/

	// task 4
	srand(time(NULL));
	const int LEN = 10;
	int array[LEN];
	for (int i = 0; i < LEN; i++) {
		array[i] = rand() % 15 + (- 10);
		std::cout << array[i] << ' ';
	}
	std::cout << std::endl;

	arrXYZ(array, LEN);

	
	return 0;
}

void sum(int a, int b) {
	int* ptrsum = new int(a + b);
	std::cout << "Sum: " << *ptrsum << std::endl;
	delete ptrsum;
}

int* array(int size) {
	if (size > 0) {
		int* arr = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = rand() % 15;
			std::cout << arr[i] << ' ';
		}
		std::cout << std::endl;
	return arr;
	}
}

void arrDynam(int len) {
	int* arr = new int[len];

	for (int i = 0; i < len; i++) {
		std::cout << "Enter " << i << " value: ";
		std::cin >> arr[i];
	}
	std::cout << std::endl;

	for (int i = 0; i < len; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;

	delete[] arr;
}

void arrXYZ(int *arr, int len) {
	int lenX = 0, lenY = 0, lenZ = 0;

	for (int i = 0; i < len; i++) {
		if (arr[i] > 0)
			++lenX;
		else if (arr[i] == 0)
			++lenZ;
		else
			++lenY;
	}

	int* arrX = new int[lenX];
	int* arrY = new int[lenY];
	int* arrZ = new int[lenZ];

	for (int i = 0, j = 0, c = 0, d = 0; i < len; i++) {
		if (arr[i] > 0)
			arrX[j++] = arr[i];
		else if (arr[i] == 0)
			arrZ[c++] = arr[i];
		else
			arrY[d++] = arr[i];
	}

	std::cout << "X" << std::endl;
	for (int i = 0; i < lenX; i++) {
		std::cout << arrX[i] << ' ';
	}
	std::cout << std::endl;

	std::cout << "Y" << std::endl;
	for (int i = 0; i < lenY; i++) {
		std::cout << arrY[i] << ' ';
	}
	std::cout << std::endl;

	std::cout << "Z" << std::endl;
	for (int i = 0; i < lenZ; i++) {
		std::cout << arrZ[i] << ' ';
	}
	std::cout << std::endl;

	delete[] arrX;
	delete[] arrY;
	delete[] arrZ;

}