// https://www.acmicpc.net/problem/2884

#include <iostream>

int main(void) {

	int h;
	int m;

	std::cin >> h;
	std::cin >> m;

	int msum = h * 60 + m;
	
	if (msum < 45) {
		msum += 24 * 60;
	}
	msum -= 45;
	std::cout << msum / 60 << " " << msum % 60;

	return 0;
}