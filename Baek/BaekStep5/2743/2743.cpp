// https://www.acmicpc.net/problem/2743

#include <iostream>

int main(void) {
	char str[101];
	std::cin >> str;

	int i = 0;
	while (str[i] != '\0') {
		++i;
	}

	std::cout << i;

	return 0;
}