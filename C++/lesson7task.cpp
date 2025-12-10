#include <iostream>

int main() {
    const int rows = 3;
    const int cols = 3;
    int arrNumbers[rows][cols], arrMirror[rows][cols];
    int arrSum[rows],arrSumCols[cols], sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Enter [" << i <<']' << '[' << j << "]: " ;
            std::cin >> arrNumbers[i][j];
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arrNumbers[i][j] << ' ';
            sum += arrNumbers[i][j];
        }
        arrSum[i] = sum;
        sum = 0;
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < rows; i++) {
        std::cout << "Sum row[" << i << ']' << " = " << arrSum[i] << std::endl;
    }
    std::cout << std::endl;

    // std::cout << "Mirror arr: " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arrMirror[j][i] = arrNumbers[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // std::cout << arrMirror[i][j] << ' ';
            sum += arrMirror[i][j];
        }
        arrSumCols[i] = sum;
        sum = 0;
        // std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < rows; i++) {
        std::cout << "Sum cols[" << i << ']' << " = " << arrSumCols[i] << std::endl;
    }

    return 0;
}