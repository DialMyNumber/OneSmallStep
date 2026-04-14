// https://www.acmicpc.net/problem/5597

#include <iostream>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	bool isSummit[30] = { false, };

	for (int i = 0; i < 28; ++i) {
		int n;
		std::cin >> n;
		isSummit[n-1] = true;
	}

	for (int i = 0; i < 30; ++i) {
		if (isSummit[i] == false) {
			std::cout << i + 1 << '\n';
		}
	}

	return 0;
}