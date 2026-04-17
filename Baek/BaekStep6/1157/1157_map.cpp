// https://www.acmicpc.net/problem/1157

#include <iostream>
#include <map>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string input;
	std::cin >> input;

	std::map<char, int> count;
	for (char c : input) {
		c = std::toupper(c);	// 대문자로 통일
		count[c]++;	// char c가 없으면 생성해서 count++
	}

	int max = 0;
	char maxKey;
	bool isMore = false;
	for (const auto& m : count ) {
		if (m.second > max) {
			max = m.second;
			maxKey = m.first;
			isMore = false; // 다시 false로 초기화
		}
		else if(m.second == max) {
			isMore = true;
		}
	}

	if (isMore) {
		std::cout << '?';
	}
	else {
		std::cout << maxKey;
	}

	return 0;
}