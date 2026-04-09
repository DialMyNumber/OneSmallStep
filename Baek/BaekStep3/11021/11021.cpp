//

#include <iostream>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int T;
	std::cin >> T;

	int a;
	int b;
	for (int i = 1; i <= T; ++i) {
		std::cin >> a;
		std::cin >> b;
		std::cout << "Case #" << i << ": " << a + b << '\n';
	}

	return 0;
}