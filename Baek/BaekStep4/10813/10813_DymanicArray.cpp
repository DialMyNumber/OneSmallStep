// https://www.acmicpc.net/problem/10813

#include <iostream>

int main(void) {
	int N, M;
	std::cin >> N >> M;

	int* Basket = new int[N+1];
	for (int i = 0; i <= N; ++i) {
		Basket[i] = i;
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

	delete[] Basket;
	Basket = nullptr;

	return 0;
}