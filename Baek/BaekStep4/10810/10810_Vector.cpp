// https://www.acmicpc.net/problem/10810

#include <iostream>
#include <vector>

int main(void) {
	int N, M;
	std::cin >> N >> M;

	std::vector<int> Basket(N+1, 0);

	for (int x = 0; x < M; ++x) {
		int i, j, k;
		std::cin >> i >> j >> k;
		for (int y = i; y <= j; ++y) {
			Basket[y] = k;
		}
	}

	for (int x = 1; x <= N; ++x) {
		std::cout << Basket[x] << " ";
	}

	return 0;
}