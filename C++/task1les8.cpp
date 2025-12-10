#include <iostream>
#include <stdint.h>

int main() {

    const int rows = 10;
    const int cols = 10;
    int arr[rows][cols], arrSum[rows], sum = 0;
    int max = INT32_MIN, maxRow = 0;
    srand(time(NULL));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 90 + 10;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << ' ';
            sum += arr[i][j];
        }
        arrSum[i] = sum;
        sum = 0;
        std::cout << std::endl;
    }

    std::cout << std::endl;
    
    for (int i = 0; i < rows; i++) {
        std::cout << arrSum[i] << std::endl;
        if (arrSum[i] > max) {
            max = arrSum[i];
            maxRow = i;
        }
    }

    std::cout << std::endl;
    std::cout << "Max: " << max << std::endl;
    std::cout << "Max row: " << maxRow << std::endl;

    return 0;
}
