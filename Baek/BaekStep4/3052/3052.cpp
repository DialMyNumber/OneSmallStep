// https://www.acmicpc.net/problem/3052

#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
	std::vector<int> rem(10);
	for (int i = 0; i < 10; ++i) {
		int n;
		std::cin >> n;
		rem[i] = n%42;
	}

	std::vector<int> ans;
	ans.push_back(rem[0]);
	
	for (int i = 1; i < 10; ++i) {
		if (std::find(ans.begin(), ans.end(), rem[i]) == ans.end()) {
			ans.push_back(rem[i]);
		}
	}

	std::cout << ans.size();

	return 0;
}