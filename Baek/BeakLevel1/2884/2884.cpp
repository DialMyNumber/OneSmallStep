// https://www.acmicpc.net/problem/2884

#include <iostream>

int main(void) {

	int h;
	int m;

	std::cin >> h;
	std::cin >> m;

	if (h == 0) {
		if (m < 45) {
			h = 23;
			m = 60 - (45 - m);
			std::cout << h << " " << m;
		}
		else if (m == 45) {
			h + 1;
			std::cout << h << " " << m - 45;
		}
		else {
			std::cout << h << " " << m - 45;
		}
	}
	else {
		int msum = h * 60 + m;
		int nh = (msum - 45) / 60;
		int nm = (msum - 45) % 60;
		std::cout << nh << " " << nm;
	}
}