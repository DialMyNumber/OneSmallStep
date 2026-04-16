// https://www.acmicpc.net/problem/1152

#include <iostream>
#include <string>

int main(void) {

	std::string str;
	std::getline(std::cin, str);

	while (str[0] == ' ') {
		str.erase(0, 1);
	}

	while (str[str.length()-1] == ' ') {
		str.erase(str.length() - 1, 1);
	}

	if (str.empty()) {
		std::cout << 0;
		return 0;
	}

	int sum = 0;
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] == ' ') {
			++sum;
		}
	}

	std::cout << sum+1;

	return 0;
}