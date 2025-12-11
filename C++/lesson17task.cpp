#include <iostream>
#include <stdint.h>

int* arrForLen(int len);

int main() {
    srand(time(NULL));
    int len = 10;
    int* arr = arrForLen(len);

    for (int i = 0; i < len; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}

int* arrForLen(int len) {
    int* arr = new int [len];
    for (int i = 0; i < len; i++) {
        arr[i] = rand() % 100;
    }
    return arr;
}
