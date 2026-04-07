// https://www.acmicpc.net/problem/1330

#include <iostream>

int main(void) {

	int a;
	int b;
	std::cin >> a;
	std::cin >> b;

	if (a < b) { std::cout << "<"; }
	else if (a == b) { std::cout << "=="; }
	else { std::cout << ">"; }

	return 0;
}