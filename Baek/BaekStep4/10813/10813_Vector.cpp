// https://www.acmicpc.net/problem/10813

#include <iostream>
#include <vector>

int main(void) {
	int N, M;
	std::cin >> N >> M;

	std::vector<int> Basket(N + 1, 0);
	for (int x = 1; x <= N; ++x) {
		Basket[x] = x;
	}

	for (int x = 0; x < M; ++x) {
		int i, j;
		std::cin >> i >> j;
		int temp = Basket[i];
		Basket[i] = Basket[j];
		Basket[j] = temp;
	}

	for (int x = 1; x <= N; ++x) {
		std::cout << Basket[x] << " ";
	}

	return 0;
}