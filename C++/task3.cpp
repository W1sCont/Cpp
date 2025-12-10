#include <iostream>
#include <stdint.h>

int main() {
    const int rows = 6;
    const int cols = 6;
    int arrNumbers[rows][cols];


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arrNumbers[i][j] = 0;
            std::cout << arrNumbers[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arrNumbers[i][j] = 1;
            std::cout << arrNumbers[i][j] << ' ';
        }
        std::cout << std::endl;
    }


    return 0;
}
