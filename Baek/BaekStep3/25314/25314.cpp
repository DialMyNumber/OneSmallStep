// https://www.acmicpc.net/problem/25314

#include <iostream>

int main(void) {

	int N;
	std::cin >> N;

	for (int i; i < (N / 4); ++i) {
		std::cout << "long ";
	}
	std::cout << "int";

	return 0;
}