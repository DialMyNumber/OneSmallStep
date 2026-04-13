// https://www.acmicpc.net/problem/10818

#include <iostream>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;

	int min, max;
	std::cin >> min;
	max = min;

	int input;
	for (int i = 1; i < N; ++i) {
		std::cin >> input;

		if (input < min) {
			min = input;
		}

		if (input > max) {
			max = input;
		}
	}

	std::cout << min << " " << max;
	return 0;
}