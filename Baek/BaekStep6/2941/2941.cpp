// https://www.acmicpc.net/problem/2941

#include <iostream>

int main(void) {
	std::string input;
	std::cin >> input;

	int idx = 0;
	int count = 0;

		for (int i = idx; i < input.length(); ++i) {
			if (input[i] == 'c') {
				if (input[i + 1] == '=' || input[i+1] == '-') {
					++i;
				}
			}
			
			if (input[i] == 'd') {
				if (input[i + 1] == 'z') {
					if (input[i + 2] == '=') {
						i += 2;
					}
				}

				if (input[i + 1] == '-') {
					++i;
				}
			}

			if (input[i] == 'l') {
				if (input[i + 1] == 'j') {
					++i;
				}
			}

			if (input[i] == 'n') {
				if (input[i + 1] == 'j') {
					++i;
				}
			}

			if (input[i] == 's') {
				if (input[i + 1] == '=') {
					++i;
				}
			}

			if (input[i] == 'z') {
				if (input[i + 1] == '=') {
					++i;
				}
			}

			++count;
		}

	std::cout << count;

	return 0;
}