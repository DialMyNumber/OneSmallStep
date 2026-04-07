// https://www.acmicpc.net/problem/14681

#include <iostream>

int main(void) {

	int x;
	int y;

	std::cin >> x;
	std::cin >> y;

	if (y > 0) { // 1, 2 사분면
		if (x > 0) {
			std::cout << "1";
		}
		else {
			std::cout << "2";
		}
	}
	else { // 3, 4 사분면
		if (x < 0) {
			std::cout << "3";
		}
		else {
			std::cout << "4";
		}
	}

	return 0;
}