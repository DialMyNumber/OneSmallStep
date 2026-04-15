// https://www.acmicpc.net/problem/9086

#include <iostream>

int main(void) {
	int T;
	std::cin >> T;

	for (int x = 0; x < T; ++x) {
		char str[1000];
		std::cin >> str;
		
		int length = 0;
		while (str[length] != '\0') {
			++length;
		}

		if (length > 0) {
			std::cout << str[0] << str[length - 1] << '\n';
		} // length -1 에서 length가 0보다 작거나 같은 경우 index 문제가 될 수 있기 때문에 예외처리
	}

	return 0;
}