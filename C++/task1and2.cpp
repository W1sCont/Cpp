#include <iostream>
#include <stdint.h>

int main() {
    const int rows = 3;
    const int cols = 3;
    int arrNumbers[rows][cols], sum = 0, average{};

    int max = INT32_MIN;
    int min = INT32_MAX;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Enter number for[" << i << ']' << '[' << j << "]: ";
            std::cin >> arrNumbers[i][j];
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arrNumbers[i][j] << ' ';
            sum += arrNumbers[i][j];
            if (arrNumbers[i][j] > max)
                max = arrNumbers[i][j];
            if (arrNumbers[i][j] < min)
                min = arrNumbers[i][j];
        }
        std::cout << std::endl;
    }

    average = sum / (rows * cols);

    std::cout << "Max: " << max << std::endl;
    std::cout << "Min: " << min << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << average << std::endl;

    return 0;
}
