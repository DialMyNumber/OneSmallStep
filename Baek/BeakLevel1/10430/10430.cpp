// https://www.acmicpc.net/problem/10430

#include <iostream>

int main(void) {
	int a;
	int b;
	int c;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	std::cout << (a + b) % c << std::endl;
	std::cout << ((a % c) + (b % c)) % c << std::endl;
	std::cout << (a * b) % c << std::endl;
	std::cout << ((a % c) * (b % c)) % c << std::endl;
}