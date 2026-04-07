// https://www.acmicpc.net/problem/2525

#include <iostream>

int main(void) {

	int h;
	int m;
	int t;

	std::cin >> h;
	std::cin >> m;
	std::cin >> t;

	int msum = h * 60 + m + t;

	if (msum >= 60 * 24) {
		msum -= 60 * 24;
  }

	std::cout << msum / 60 << " " << msum % 60;

	return 0;
}
