// https://www.acmicpc.net/problem/8393

#include <iostream>

int main(void) {

	int n;
	std::cin >> n;

	// √÷¥Î : 1+10000 * 5000 = 10,001 * 5,000 = 50,005,000
	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		sum += i;
	}
	std::cout << sum;

	return 0;
}