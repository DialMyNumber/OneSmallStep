// https://www.acmicpc.net/problem/10807

#include <iostream>
#include <vector>

int main(void) {
	int N;
	std::cin >> N;

	std::vector<int> Arr;
	int a;

	for (int i = 0; i < N; ++i) {
		std::cin >> a;
		Arr.push_back(a);
	}

	int v;
	std::cin >> v;

	int count = 0;

	for (int j : Arr) {
		if (j == v) {
			++count;
		}
	}
	std::cout << count;

	return 0;
}