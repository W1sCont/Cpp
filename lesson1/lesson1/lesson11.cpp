//#include <iostream>
//
//// шаблонна функція
//
//// template <class T>
//template <typename T>
//T Max(T a, T b) {
//	return (a > b) ? a : b;
//}
//
//template <typename Type>
//void Swap(Type &a, Type &b) {
//	Type temp = a;
//	a = b;
//	b = temp;
//}
//
//template <typename T>
//T Average(T arr[], int size) {
//	int sum = 0;
//	for (int i = 0; i < size; i++) {
//		sum += arr[i];
//	}
//	return sum / size;
//}
//
//template <typename T>
//void maxMin(T arr[][5], int size, T &max, T &min) {
//	max = arr[0][0];
//	min = arr[0][0];
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (arr[i][j] > max) {
//				max = arr[i][j];
//			}
//			if (arr[i][j] < min) {
//				min = arr[i][j];
//			}
//		}
//	}	
//}
//
//
//template <typename T>
//void sortUp(T arr[], int size) {
//	T temp{};
//	for (int i = 0; i < size; i++) {
//		for (int j = i + 1; j < size; j++) {
//			if (arr[i] > arr[j]) {
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//template <typename Type>
//void printArray(Type arr, int size) {
//	sortUp(arr, size);
//	for (int i = 0; i < size; i++) {
//		std::cout << arr[i] << ' ';
//	}
//	std::cout << std::endl;
//}
//
//
//
//int main() {
//
//	/*std::cout << Max(3, 5) << std::endl;
//	std::cout << Max(3.4, 5.3) << std::endl;
//
//	int a = 4, b = 7;
//	Swap(a, b);
//	std::cout << a << ' ' << b << std::endl;*/
//
//	/*const int size = 5;
//	int arr[size]{ 5, 6, 3, 4, 2 };
//	double arr2[size]{ 5.2, 3.3, 3.5, 4.2, 2.1 };
//
//	std::cout << Average(arr, size) << std::endl;
//	std::cout << Average(arr2, size) << std::endl;*/
//
//	// task 1
//	/*const int size = 5;
//	int array[size]{ 2, 5, 1, 6, 3 };
//	double array2[size]{ 2.3, 5.1, 1.5, 6.1, 3.2 };
//
//	sortUp(array, size);
//	sortUp(array2, size);
//
//	for (int i = 0; i < size; i++) {
//		std::cout << array[i] << ' ';
//	}
//	std::cout << std::endl;
//
//	for (int i = 0; i < size; i++) {
//		std::cout << array2[i] << ' ';
//	}
//	std::cout << std::endl;*/
//
//	// task 2
//	srand(time(NULL));
//	const int size = 5;
//	int array[size];
//	double array2[size];
//	for (int i = 0; i < size; i++) {
//		array[i] = rand() % 10;
//	}
//
//	for (int i = 0; i < size; i++) {
//		array2[i] = (rand() % 5 + 10) / 2.1;
//	}
//
//	printArray(array, size);
//	printArray(array2, size);
//
//
//
//	return 0;
//}