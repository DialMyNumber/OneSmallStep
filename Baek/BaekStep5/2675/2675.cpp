// https://www.acmicpc.net/problem/2675

#include <iostream>

int main(void) {
	int T;
	std::cin >> T;

	for (int i = 0; i < T; ++i) {
		int R;
		std::cin >> R;

		std::string str;
		std::cin >> str;

		for (int n = 0; n < str.length(); ++n) {
			for (int m = 0; m < R; ++m) {
				std::cout << str[n];
			}
		}
		std::cout << '\n';
	}

	return 0;
}