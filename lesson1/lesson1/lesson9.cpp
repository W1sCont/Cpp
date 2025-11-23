//#include <iostream>
//#include <string>
//
//int summ(int* arr, int len);
//int max(int* arr, int len);
//std::string toUpper(std::string str);
//void ToUpper(std::string& str);
//void toLower(std::string& str);
//
//
//int main() {
//	// task 1
//	/*const int num = 5;
//	int arrey[num];
//	srand(time(NULL));
//	
//	for (int i = 0; i < num; i++) {
//		arrey[i] = rand() % 10;
//		std::cout << arrey[i] << ' ';
//	}
//	std::cout << std::endl;
//	std::cout << "Summ: " << summ(arrey, num) << std::endl;*/
//
//	// task 2
//	/*const int SIZE = 5;
//	int arr[SIZE];
//
//	for (int i = 0; i < SIZE; i++) {
//		std::cout << "Enter num for index " << i << ": ";
//		std::cin >> arr[i];
//	}
//
//	std::cout << std::endl;
//	std::cout << "Max el: " << max(arr, SIZE) << std::endl;*/
//
//	// task 3
//	/*std::string str = "Hello world";
//	ToUpper(str);
//	std::cout << str << std::endl;
//
//	std::string str1 = "world";
//	std::cout << toUpper(str1) << std::endl;*/
//
//	// task 4
//	/*std::string str1 = "HelLo WoRld";
//	toLower(str1);
//	std::cout << str1 << std::endl;*/
//
//	// task 5
//
//
//
//	return 0;
//}
//
//int summ(int* arr, int len) {
//	int sum = 0;
//	for (int i = 0; i < len; i++) {
//		sum += *(arr + i);
//	}
//	return sum;
//}
//
//int max(int* arr, int len) {
//	int maxNum = INT32_MIN;
//	for (int i = 0; i < len; i++) {
//		if (*(arr + i) > maxNum)
//			maxNum = *(arr + i);
//	}
//	return maxNum;
//}
//
//std::string toUpper(std::string str) {
//	for (int i = 0; i < str.size(); i++) {
//		str[i] = toupper(str[i]);
//	}
//	return str;
//}
//
//void ToUpper(std::string &str) {
//	for (int i = 0; i < str.size(); i++) {
//		str[i] = toupper(str[i]);
//	}
//}
//
//void toLower(std::string &str) {
//	for (int i = 0; i < str.size(); i++) {
//		str[i] = tolower(str[i]);
//	}
//}