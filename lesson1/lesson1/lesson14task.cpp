//#include <iostream>
//
//int findEl(int* arr, int size, int num);
//
//int main() {
//	srand(time(NULL));
//	const int SIZE = 10;
//	int arr[SIZE];
//	for (int i = 0; i < SIZE; i++) {
//		arr[i] = rand() % 10;
//		std::cout << arr[i] << ' ';
//	}
//	std::cout << std::endl;
//
//	int a = 3;
//	int result = findEl(arr, SIZE, a);
//	std::cout << "In array " << result << " value " << a << std::endl;
//
//	return 0;
//}
//
//int findEl(int* arr, int size, int num) {
//	int count = 0;
//	for (int i = 0; i < size; i++) {
//		if (*(arr + i) == num)
//			++count;
//	}
//	return count;
//}