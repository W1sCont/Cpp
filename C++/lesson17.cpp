#include <iostream>
#include <stdint.h>

int maxArr(int** arr, int rosw, int cols);
void maxArrIndex(int** arr, int rows, int cols);
int** arrMix(int** arr, int** arr2, int rows, int cols);

int main() {
    // int rows = 5, cols = 5;
    // int** matrix = new int* [rows];
    //
    // for (int i = 0; i < rows; i++) {
    //     std::cout << matrix[i] << ' ';
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;
    //
    // for (int i = 0; i < cols; i++) {
    //     matrix[i] = new int[cols];
    // }
    //
    // for (int i = 0; i < rows; i++) {
    //     std::cout << matrix[i] << ' ';
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;
    //
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         std::cout << matrix[i][j] << ' ';
    //     }
    //     std::cout << std::endl;
    // }
    //
    // // !!!! delete !!!!
    // for (int i =0; i < rosw; i++) {
    //     delete[] matrix[i];
    // }
    // delete[] matrix;
    // matrix = nullptr;

    // int rows = 0, cols = 0;
    // std::cout << "Enter rosw: ";
    // std::cin >> rows;
    //
    // std::cout << "Enter cols: ";
    // std::cin >> cols;
    //
    // int** matrix = new int* [rows];
    //
    // for (int i = 0; i < rows; i++) {
    //     matrix[i] - new int[cols];
    // }
    //
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         matrix[i][j] = rand() % 15;
    //         std::cout << matrix[i][j] << ' ';
    //     }
    //     std::cout << std::endl;
    // }
    //
    // for (int i = 0; i < rows; i++) {
    //     delete[] matrix[i];
    // }
    // delete[] matrix;

    // // task 1
    // int rows = 5, cols = 5;
    // srand(time(NULL));
    // int** matrix = new int* [rows];
    //
    // for (int i = 0; i < rows; i++) {
    //     matrix[i] = new int [cols];
    // }
    //
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         matrix[i][j] = rand() % 10;
    //         std::cout << matrix[i][j] << ' ';
    //     }
    //     std::cout << std::endl;
    // }
    //
    // // delete
    // for (int i = 0; i < rows; i++) {
    //     delete[] matrix[i];
    // }
    // delete[] matrix;

    // task 2
    //
    // int rows = 0, cols = 0, result = 0;
    //
    // std::cout << "Enter rows: ";
    // std::cin >> rows;
    //
    // std::cout << "Enter cols: ";
    // std::cin >> cols;
    //
    // int** matrix = new int* [rows];
    // for (int i = 0; i < rows; i++) {
    //     matrix[i] = new int [cols];
    // }
    //
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         std::cout << "Enter " << ": ";
    //         std::cin >> matrix[i][j];
    //         result += matrix[i][j];
    //     }
    // }
    //
    // std::cout << "Result: " << result << std::endl;
    //
    //
    // for (int i = 0; i < rows; i++) {
    //     delete matrix[i];
    // }
    //
    // delete[] matrix;

    // task 3
    // int rows = 5, cols = 5;
    // srand(time(NULL));
    // int** matrix = new int* [rows];
    //
    // for (int i = 0; i < rows; i++) {
    //     matrix[i] = new int [cols];
    // }
    //
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         matrix[i][j] = rand() % 20 + 30;
    //         std::cout << matrix[i][j] << ' ';
    //     }
    //     std::cout << std::endl;
    // }
    //
    // std::cout << "Max el: " << maxArr(matrix, rows, cols) << std::endl;
    // std::cout << "Max index: ";
    // maxArrIndex(matrix, rows, cols);
    //
    // for (int i = 0; i < rows; i++) {
    //     delete[] matrix[i];
    // }
    // delete[] matrix;

    // task 3
    int rows = 5, cols = 5;
    int** matrix = new int* [rows];

    for (int i = 0; i < rows; i++) {
        matrix[i] = new int [cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 10;
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    int** matrix2 = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix2[i] = new int [cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix2[i][j] = rand() % 10;
            std::cout << matrix2[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    int** arr = arrMix(matrix, matrix2, rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    // delete
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    for (int i = 0; i < rows; i++) {
        delete[] matrix2[i];
    }
    delete[] matrix2;

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

int maxArr(int** arr, int rows, int cols) {
    int max = INT32_MIN;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
    }
    return max;
}

void maxArrIndex(int** arr, int rows, int cols) {
    int max = INT32_MIN;
    int arrMax[2];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            if (arr[i][j] > max) {
                max = arr[i][j];
                arrMax[0] = i;
                arrMax[1] = j;
            }
    }
    std::cout << arrMax[0] << ' ' << arrMax[1] << std::endl;
}

int** arrMix(int** arr, int** arr2, int rows, int cols) {
    int** arr_res = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr_res[i] = new int [cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr_res[i][j] = arr[i][j] * arr2[i][j];
        }
    }
    return arr_res;
}