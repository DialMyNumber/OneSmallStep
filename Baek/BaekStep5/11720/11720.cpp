// https://www.acmicpc.net/problem/11720

#include <iostream>

int main(void) {
	int N;
	std::cin >> N;

	std::string str;
	std::cin >> str;

	int sum = 0;
	for (int i = 0; i < N; ++i) {
		sum += (int)str[i] - (int)'0'; // 0123456789
	}

	std::cout << sum;

	return 0;
}