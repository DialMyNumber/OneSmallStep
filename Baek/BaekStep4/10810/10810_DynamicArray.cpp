// https://www.acmicpc.net/problem/10810

#include <iostream>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, M;
	std::cin >> N >> M;

	N++;

	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		arr[i] = 0;
	}

	for (int a = 0; a < M; ++a) {
		int i, j, k;
		std::cin >> i >> j >> k;
		for (int x = i; x <= j; ++x) {
			arr[x] = k;
		}
	}

	for (int n = 1; n < N; ++n) {
		std::cout << arr[n] << " ";
	}

	delete[] arr;
	arr = nullptr;

	return 0;
}