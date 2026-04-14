// https://www.acmicpc.net/problem/10811

#include <iostream>
#include <vector>

int main(void) {
	int N, M;
	std::cin >> N >> M;

	std::vector<int> basket(N + 1);
	for (int a = 0; a <= N; ++a) {
		basket[a] = a;
	}

	std::vector<int> temp(N + 1);
	for (int x = 0; x < M; ++x) {
		int i, j;
		std::cin >> i >> j;	// i번째부터 j번째까지를 역순

		for (int k = 0; k < i; ++k) { // 0부터 i까지는 동일
			temp[k] = basket[k];
		}

		int tempi = i;
		for (int k = j; k >= i; --k) { // j부터 j-1, j-2, ... i까지 
			temp[tempi++] = basket[k];
		}

		for (int k = j + 1; k <= N; ++k) { // j+1부터 끝까지
			temp[k] = basket[k];
		}

		for (int k = 0; k <= N; ++k) { // 기존 basket 덮어쓰기
			basket[k] = temp[k];
		}
	}

	for (int k = 1; k <= N; ++k) {
		std::cout << basket[k] << " ";
	}

	return 0;
}