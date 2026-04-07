// https://www.acmicpc.net/problem/2480

#include <iostream>

int main(void) {
	int a;
	int b;
	int c;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	if (a == b && b == c) {
		std::cout << 10000 + a * 1000;
	}
	else if (a == b || b == c || a == c) {
		if (a == b || b == c) {
			std::cout << 1000 + b * 100;
		}
		else {
			std::cout << 1000 + a * 100;
		}
	}
	else {
		int big = a;
		if (big < b) {
			big = b;
		}

		if (big < c) {
			big = c;
		}

		std::cout << big * 100;
	}
	return 0;
}