// https://www.acmicpc.net/problem/2438

#include <iostream>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int T;
	std::cin >> T;

	for (int j = 1; j <= T; ++j) {
		for (int i = 1; i <= j; ++i) {
			std::cout << "*";
		}
		std::cout << '\n';
	}

	return 0;
}