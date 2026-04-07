// https://www.acmicpc.net/problem/2753

#include <iostream>

int main(void) {

	int y;
	std::cin >> y;

	if (y % 400 == 0) { std::cout << "1"; }
	else if (y % 100 == 0) { std::cout << "0"; }
	else if (y % 4 == 0) { std::cout << "1"; }
	else { std::cout << "0"; }

	return 0;
}