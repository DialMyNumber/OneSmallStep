// https://www.acmicpc.net/problem/18108

#include <iostream>

int main(void) {
	size_t ty;
	std::cin >> ty;
	if (ty < 1000 || ty > 3000) {
		return 0;
	}
	
	std::cout << ty - (2541 - 1998);

}