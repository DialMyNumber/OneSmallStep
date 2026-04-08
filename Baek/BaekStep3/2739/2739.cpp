// https://www.acmicpc.net/problem/2739

#include <iostream>

int main(void) {

	int input;
	std::cin >> input;
	
	for (int i = 1; i < 10; ++i) {
		std::cout << input << " * " << i << " = " << input * i << std::endl;
	}

	return 0;
}