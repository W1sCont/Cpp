// #include <iostream>
// #include <stdint.h>
//
// template <typename T>
// T valueMax(T *a, T *b);
//
// void to_2(int *num_ptr);
//
// int main() {
//     // task 1
//     // double a = 1.32, b = 2.23;
//     // std::cout << valueMax(&a, &b) << std::endl;
//
//     // task 2
//     // int num = 10;
//     // int* ptr = &num;
//     //
//     // std::cout << "num: " << num << std::endl;
//     // std::cout << "&num: " << &num << std::endl;
//     // std::cout << "ptr: " << *ptr << std::endl;
//     // std::cout << "*ptr: " << ptr << std::endl;
//     // *ptr = 20;
//     // std::cout << "new *ptr: " << *ptr << std::endl;
//
//     // task 3
//     // int x = 2;
//     // int* ptr = &x;
//     // int** p = &ptr;
//     //
//     // std::cout << **p << std::endl;
//
//     // task 4
//     // int num = 3;
//     // int* ptr = &num;
//     // std::cout << "num: " << num << std::endl;
//     // to_2(ptr);
//     // std::cout << "ptr: " << *ptr << std::endl;
//
//
//     return 0;
// }
//
// template <typename T>
// T valueMax(T *a, T *b) {
//     return (*a > *b) ? *a : *b;
// }
//
// void to_2(int *num_ptr) {
//     *num_ptr *= 2;
// }