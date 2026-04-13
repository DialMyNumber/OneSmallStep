// https://www.acmicpc.net/problem/10871

#include <iostream>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, X;
	std::cin >> N >> X;

	int a;
	int count = 0;
	for (int i = 0; i < N; ++i) {
		std::cin >> a;
		if (a < X) {
			std::cout << a << " ";
		}
	}

	return 0;
}