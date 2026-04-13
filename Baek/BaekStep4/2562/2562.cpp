// https://www.acmicpc.net/problem/2562

#include <iostream>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int max;
	std::cin >> max;
	int maxIndex;

	int input;
	int i = 1;
	maxIndex = i;

	for (i = 2; i <= 9; ++i) {
		std::cin >> input;
		if (input > max) {
			max = input;
			maxIndex = i;
		}
	}
	std::cout << max << '\n' << maxIndex;

	return 0;
}