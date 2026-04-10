// https://www.acmicpc.net/problem/10952

#include <iostream>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int a;
	int b;

	while (true) {
		std::cin >> a;
		std::cin >> b;
		if (a == 0 && b == 0) {
			break;
		}
		std::cout << a + b << '\n';
	}

	return 0;
}