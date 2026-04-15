// https://www.acmicpc.net/problem/10809

#include <iostream>

int main(void) {
	std::string S;
	std::cin >> S;

	for (int i = (int)'a'; i <= (int)'z'; ++i) {
		bool isIn = false;

		for (int n = 0; n < S.length(); ++n) {

			if (S[n] == (char)i) {
				std::cout << n << " ";
				isIn = true;
				break;
			}
		}

		if (!isIn) {
			std::cout << -1 << " ";
		}
	}

	return 0;
}