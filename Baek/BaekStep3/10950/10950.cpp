// https://www.acmicpc.net/problem/10950

#include <iostream>

int main(void) {

	int T;
	std::cin >> T;

	for (int i = 0; i < T; ++i) {
		int a;
		int b;

		std::cin >> a;
		std::cin >> b;

		std::cout << a + b << std::endl;
	}
}