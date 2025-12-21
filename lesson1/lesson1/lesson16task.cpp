#include <iostream>

int** fn_rozpred(int rows, int cols);
int** init_arr(int** arr, int rows, int cols);
void print_arr(int** arr, int rows, int cols);
void dell_arr(int** arr, int rows);
int** add_last_cols(int** arr, int rows, int& cols);
int** add_last_rows(int** arr, int& rows, int cols);
int** dell_first_row(int** arr, int& rows, int cols);

int main() {
	int rows = 5, cols = 5;
	int** new_arr = fn_rozpred(rows, cols);

	std::cout << "init new arr" << std::endl;
	init_arr(new_arr, rows, cols);
	print_arr(new_arr, rows, cols);
	std::cout << std::endl;

	std::cout << "add last col" << std::endl;
	new_arr = add_last_cols(new_arr, rows, cols);
	print_arr(new_arr, rows, cols);
	std::cout << std::endl;

	std::cout << "add last row" << std::endl;
	new_arr = add_last_rows(new_arr, rows, cols);
	print_arr(new_arr, rows, cols);
	std::cout << std::endl;

	std::cout << "dell first row" << std::endl;
	new_arr = dell_first_row(new_arr, rows, cols);
	print_arr(new_arr, rows, cols);
	std::cout << std::endl;



	dell_arr(new_arr, rows);
	return 0;
}

// 1
int** fn_rozpred(int rows, int cols) {
	int** arr = new int*[rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}
	return arr;
}

// 2
int** init_arr(int** arr,int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 10;
		}
	}
	return arr;
}

// 3
void print_arr(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << arr[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}

// 4
void dell_arr(int** arr, int rows) {
	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}

// 5
int** add_last_cols(int** arr, int rows, int& cols) {
	int** new_arr = new int* [rows];

	for (int i = 0; i < rows; i++) {
		new_arr[i] = new int[cols + 1];

		for (int j = 0; j < cols; j++) {
			new_arr[i][j] = arr[i][j];
		}

		new_arr[i][cols] = rand() % 10;

		delete[] arr[i];
	}

	delete[] arr;
	cols++;
	return new_arr;
}

// 6
int** add_last_rows(int** arr, int &rows, int cols){
	int** new_arr = new int* [rows + 1];

	for (int i = 0; i < rows; i++) {
		new_arr[i] = arr[i];
	}

	new_arr[rows] = new int[cols];
	for (int j = 0; j < cols; j++) {
		new_arr[rows][j] = rand() % 10;
	}

	delete[] arr;

	rows++;
	return new_arr;
}

// 7
int** dell_first_row(int** arr, int &rows, int cols) {
	delete[] arr[0];

	int** new_arr = new int* [rows - 1];

	for (int i = 1; i < rows; i++) {
		new_arr[i - 1] = arr[i];
	}

	delete[] arr;

	rows--;
	return new_arr;
}