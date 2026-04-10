// https://www.acmicpc.net/problem/2439

#include <iostream>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int T;
	std::cin >> T;

	for (int j = 1; j <= T; ++j) {
		for (int k = 1; k <= T - j; ++k) {
			std::cout << " ";
		}
		for (int i = 1; i <= j; ++i) {
			std::cout << "*";
		}
		std::cout << '\n';
	}

	return 0;
}