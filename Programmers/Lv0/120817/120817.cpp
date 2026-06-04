// https://school.programmers.co.kr/learn/courses/30/lessons/120817
#include <iostream>

int main(void) {
	size_t numbers_len;
	std::cin >> numbers_len;

	int* numbers = new int[numbers_len];
	
	double answer = 0;

	for (size_t i = 0; i < numbers_len; ++i) {
		std::cin >> numbers[i];
		answer += numbers[i];
	}

	answer /= numbers_len;

	std::cout << answer << '\n';
	delete[] numbers;

	return 0;
}