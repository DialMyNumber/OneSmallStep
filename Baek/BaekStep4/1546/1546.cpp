// https://www.acmicpc.net/problem/1546

#include <iostream>
#include <vector>

int main(void) {
	int N;
	std::cin >> N;
	std::vector<int> origin(N);
	int max;

	int score;
	std::cin >> score;
	origin[0] = score;
	max = score;

	for (int i = 1; i < N; ++i) {
		std::cin >> score;
		if (score > max) {
			max = score;
		}
		origin[i] = score;
	}

	size_t sum = 0;
	for (int e : origin) {
		sum += e;
	}
	double avg = (double)sum / origin.size();

	std::cout << avg / max * 100.0f;

}