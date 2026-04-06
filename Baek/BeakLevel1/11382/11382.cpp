// https://www.acmicpc.net/problem/11382

#include <iostream>

int main(void) {
	// 10^12? -> 1 2 3 4 5 6 7 8 9 10 11 12 = 10조
	// int는 4byte = 16bit = [-2^15 ~ 0 ~ 2^15 -1] = 최대 21억, 
	// size_t는 unsigned long long = 8byte = 64bit(64bit플랫폼에서) = [0 ~ 2^64 - 1] = 최대 1.8 * 10^19 = 1800경 정도
	size_t a;
	size_t b;
	size_t c;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	std::cout << a + b + c;
}