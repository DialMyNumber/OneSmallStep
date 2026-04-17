// https://www.acmicpc.net/problem/10988

#include <iostream>

int main(void) {
	std::string input;
	std::cin >> input;

	for (int i = 0; i < input.length(); ++i) {
		if (input[i] != input[input.length() - 1 - i]) {
			std::cout << 0;
			return 0;
		}
	}
	std::cout << 1;
	return 0;
}