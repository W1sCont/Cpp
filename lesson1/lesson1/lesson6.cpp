//#include <iostream>
//
//int main() {
//
//	// task 1
//	/*srand(time(NULL));
//
//	float result{};
//	int numbers[10];
//	for (int i = 0; i < 10; i++) {
//		numbers[i] = rand() % 10;
//		std::cout << numbers[i] << ' ';
//		result += numbers[i];
//	}
//	std::cout << std::endl;
//	std::cout << "Summ: " << result << std::endl;
//	result /= 10;
//	std::cout << "Result: " << result << std::endl;*/
//
//	int array[] = { 5, 2, 9, 1, 5, 6 };
//	int size = sizeof(array) / sizeof(array[0]);
//
//	// Знаходження мінімального та максимального значення за допомогою min_element та max_element
//	int min_element = *(std::min_element(array, array + size));
//	int max_element = *(std::max_element(array, array + size));
//
//	std::cout << "Original array: ";
//	for (int i = 0; i < size; i++) {
//		std::cout << array[i] << " ";
//	}
//	std::cout << std::endl;
//
//	std::cout << "Minimum element: " << min_element << std::endl;
//	std::cout << "Maximum element: " << max_element << std::endl;
//
//	//  // size()
//	int array[] = { 5, 2, 9, 1, 5, 6 };
//
//
//	for (int i = 0, size = std::size(array); i < size; i++)
//	{
//		std::cout << array[i] << ' ';
//	}
//
//	std::cout << std::endl;
//
//
//	// Використання std::size() з C++11 і новіших
//	int size_using_std_size = std::size(array);
//
//	std::cout << "Size using std::size(): " << size_using_std_size << std::endl;
//
//
//	// task 2
//	/*char ch[12];
//
//	for (int i = 0; i < 12; i++) {
//		std::cout << "Enter char: ";
//		std::cin >> ch[i];
//	}
//	for (int i = 0; i < 12; i++) {
//		if (i == 0 || i == 4 || i == 11)
//			std::cout << "char: " << ch[i] << std::endl;
//	}*/
//	
//	// task 3
//	/*srand(time(NULL));
//
//	int x{}, b{};
//	int num[10];
//	for (int i = 0; i < 10; i++) {
//		num[i] = rand() % 10;
//		std::cout << "El" << i << '=' << num[i] << std::endl;
//	}
//	std::cout << "Enter number: ";
//	std::cin >> x;
//
//	for (int i = 0; i < 10; i++) {
//		if (num[i] == x) {
//			std::cout << "First index x: " << i << std::endl;
//			b = 1;
//			break;
//		}
//		
//	}
//	if (b!=1)
//		std::cout << "Element not found" << std::endl;*/
//
//	// task 4
//
//	/*srand(time(NULL));
//	int count = 0;
//	int num[10];
//	int max = INT32_MIN;
//	int min = INT32_MAX;
//	for (int i = 0; i < 10; i++) {
//		num[i] = rand() % 10;
//		std::cout << "El: " << num[i] << std::endl;
//		if (num[i] % 2 == 0)
//			count++;
//		if (num[i] < min)
//			min = num[i];
//		if (num[i] > max)
//			max = num[i];
//	}
//	std::cout << "Odd: " << count << std::endl;
//	std::cout << "Min: " << min << std::endl;
//	std::cout << "Max: " << max << std::endl;*/
//
//
//
//	return 0;
//}