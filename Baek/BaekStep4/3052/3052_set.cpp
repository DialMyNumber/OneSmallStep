// https://www.acmicpc.net/problem/3052

#include <iostream>
#include <set>

int main(void) {

	std::set<int> ans;

	for (int i = 0; i < 10; ++i) {
		int input;
		std::cin >> input;
		ans.insert(input%42);
	}

	std::cout << ans.size();

	return 0;
}