#include <iostream>
#include <stdint.h>

int main() {
    srand(time(NULL));
    const int rows = 5;
    const int cols = 5;
    int arrNumbers[rows][cols], value{};

    std::cout << "Enter number (0-5): ";
    std::cin >> value;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arrNumbers[i][j] = random() % 6;
            std::cout << arrNumbers[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arrNumbers[i][j] == value)
                std::cout << "Found: [" << i << ']' << '[' << j << "] = " << arrNumbers[i][j] << std::endl;
        }
    }

    return 0;
}
