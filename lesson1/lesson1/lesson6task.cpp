#include <iostream>

int main() {
	int const SIZE = 10;
	int evaluations[SIZE], average{}, count = 0;
	int max = INT32_MIN;
	int min = INT32_MAX;


	for (int i = 0, j = 1; i < SIZE; i++) {
		std::cout << "Enter " << j++ << " student evaluation: ";
		std::cin >> evaluations[i];
	}

	for (int i = 0; i < SIZE; i++) {

		if (evaluations[i] > 90) 
			count++;
	
		if (evaluations[i] < min) 
			min = evaluations[i];
		
		if (evaluations[i] > max) 
			max = evaluations[i];
		
		average += evaluations[i];
	}

	std::cout << "Average: " << average / SIZE << std::endl;
	std::cout << "Max evaluations: " << max << std::endl << "Min evaluations: " << min << std::endl;
	std::cout << "Number of students who scored more than 90 points: " << count << std::endl;

	return 0;
}