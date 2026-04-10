// https://www.acmicpc.net/problem/10951

#include <iostream>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int a;
	int b;

	while (std::cin >> a >> b) {
		std::cout << a + b << '\n';
	}

	return 0;
}