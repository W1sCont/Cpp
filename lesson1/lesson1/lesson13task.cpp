//#include <iostream>
//
//template <typename T>
//T calculate(T* a, T* b, char symb);
//
//int main() {
//
//	/*int a = 5, b = 23;
//	double c = 2.3, d = 4.1;
//	char plus = '+';
//
//	int num = calculate(&a, &b, '+');
//	std::cout << a << " + " << b << " = " << num << std::endl;
//	std::cout << a << " - " << b << " = " << calculate(&a, &b, '-') << std::endl;
//	std::cout << c << " * " << d << " = " << calculate(&c, &d, '*') << std::endl;
//	std::cout << c << " / " << d << " = " << calculate(&c, &d, '/') << std::endl;*/
//
//	int num1, num2;
//	char symb;
//	std::cout << "Enter first int: ";
//	std::cin >> num1;
//	std::cout << "Enter secont int: ";
//	std::cin >> num2;
//	std::cout << "Enter operation (+ - * /): ";
//	std::cin >> symb;
//	std::cout << num1 << ' ' << symb << ' ' << num2 << " = " << calculate(&num1, &num2, symb) << std::endl;
//
//	
//
//	return 0;
//}
//
//template <typename T>
//T calculate(T* a, T* b, char symb) {
//	switch(symb){
//	case '+':
//		return *a + *b;
//	case '-':
//		return *a - *b;
//	case '*':
//		return *a * *b;
//	case '/':
//		return *a / *b;
//	}
//}