// https://www.acmicpc.net/problem/2588

#include <iostream>

int main(void) {
	size_t a;
	size_t b;
	std::cin >> a;
	std::cin >> b;

	size_t sum = 0;
	size_t tempB = b;
	size_t digit = 1;
	for (int i = 0; tempB > 0; ++i) {
		std::cout << a * (tempB % 10) << std::endl;
		sum += a * (tempB % 10) * digit;
		tempB /= 10;
		digit *= 10;
	}
	std::cout << sum;

	return 0;
}