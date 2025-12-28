//#include <iostream>
//#include <string>
//#include <fstream>
//
//int main() {
//
//	/*std::ifstream File("newFile.txt");
//
//	if (File.is_open()) {
//		std::cout << "File open" << std::endl;
//	}
//	else {
//		std::cout << "File not open" << std::endl;
//		return -1;
//	}*/
//
//	/*std::string str;
//	while (File >> str) {
//		std::cout << str << std::endl;
//	}
//
//	while (getline(File, str)) {
//		std::cout << str << std::endl;
//	}
//
//	char ch;
//	while (File.get(ch)) {
//		std::cout << ch << std::endl;
//	}*/
//
//
//	// task 1
//	/*std::string str;
//	int count{}, row = 1;
//	std::string temp;
//	while (getline(File, str)) {
//		std::cout << str << std::endl;
//		if (str.size() > temp.size()) {
//			row++;
//			count = str.size();
//			temp = str;
//		}
//	}
//
//	std::cout << std::endl;
//	std::cout << "Line: " << temp << std::endl;
//	std::cout << "Count: " << count << std::endl;
//	std::cout << "Row: " << row << std::endl;*/
//	
//	// task 2
//	/*std::string str;
//	char symb;
//	std::cout << "Enter symb: ";
//	std::cin >> symb;
//	int count = 0;
//
//	while (File >> str) {
//		std::cout << str << std::endl;
//		if (str[0] == symb)
//			count++;
//	}
//	std::cout << "First sybm of word count: " << count << std::endl;*/
//
//	// task 3
//	// char d = '\0';
//
//	//std::ofstream file;
//	///*file.open("newFile.txt", std::ios::app);*/ // dla do zapysu
//	//file.open("newFile.txt");
//
//	//if (file.is_open()) {
//	//	std::cout << "File open" << std::endl;
//	//}
//	//else {
//	//	std::cout << "File not open" << std::endl;
//	//	return -1;
//	//}
//	//double duo = 123.233;
//	//
//	//file << duo << std::endl;
//	//file.close();
//
//	//std::ifstream File("newFile.txt");
//
//	//if (File.is_open()) {
//	//	std::cout << "File open to read" << std::endl;
//	//}
//	//else {
//	//	std::cout << "File not open" << std::endl;
//	//	return -1;
//	//}
//
//	//std::string str;
//	//while (File >> str) {
//	//	std::cout << str << std::endl;
//	//}
//
//	// task 3
//	/*std::ofstream newFile;
//	newFile.open("File.txt");
//
//	if (newFile.is_open()) {
//		std::cout << "File open" << std::endl;
//	}
//	else {
//		std::cout << "File is not open" << std::endl;
//		return -1;
//	}
//
//
//	std::ifstream File("newFile.txt");
//	if (newFile.is_open()) {
//		std::cout << "File open to read" << std::endl;
//	}
//	else {
//		std::cout << "File is not open" << std::endl;
//		return -1;
//	}
//
//	std::string str;
//	while (getline(File, str)) {
//		std::cout << str << std::endl;
//		newFile << str << std::endl;
//	}
//
//	newFile.close();*/
//
//	/*std::cout << std::endl;
//	std::ifstream File("File.txt");
//	while (getline(File, str)) {
//		std::cout << str << std::endl;
//	}*/
//
//	//// task 4
//	//std::ofstream arrFile("arrFiel.txt");
//	//if (arrFile.is_open()) {
//	//	std::cout << "File is open" << std::endl;
//	//}
//	//else {
//	//	std::cout << "File is not open" << std::endl;
//	//}
//
//	//int arr[5][5];
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		arr[i][j] = rand() % 10;
//	//	}
//	//}
//
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		std::cout << arr[i][j] << ' ';
//	//		arrFile << arr[i][j] << ' ';
//	//	}
//	//	arrFile << std::endl;
//	//	std::cout << std::endl;
//	//}
//
//	//arrFile.close();
//
//	//std::string str;
//	//std::ifstream file("arrFiel.txt");
//
//	//if (file.is_open()) {
//	//	std::cout << "File is open" << std::endl;
//	//}
//	//else {
//	//	std::cout << "File is not open" << std::endl;
//	//}
//	//
//	//while (getline(file, str)) {
//	//	std::cout << str << std::endl;
//	//}
//
//	// task 5
//	std::ifstream file("arrFiel.txt");
//
//	if (file.is_open()) {
//		std::cout << "File is open" << std::endl;
//	}
//	else {
//		std::cout << "File is not open" << std::endl;
//	}
//
//	std::ofstream reversFile("reversFile.txt");
//	if (reversFile.is_open()) {
//		std::cout << "File is open" << std::endl;
//	}
//	else {
//		std::cout << "File is not open" << std::endl;
//		return -1;
//	}
//
//	file.seekg(0, std::ios::end);
//	int len = file.tellg();
//
//	char ch;
//	for (int i = len - 1; i >= 0; i--) {
//		file.seekg(i);
//		file.get(ch);                   
//		reversFile.put(ch);                             
//	}
//
//	file.close();
//	reversFile.close();
//
//
//	return 0;
//}