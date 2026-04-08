// https://www.acmicpc.net/problem/25304

#include <iostream>

int main(void) {

	int iSum;
	std::cin >> iSum;

	int count;
	std::cin >> count;

	int price;
	int amount;
	int mySum = 0;
	for (int i = 0; i < count; ++i) {
		std::cin >> price;
		std::cin >> amount;
		mySum += price * amount;
	}

	if (iSum == mySum) {
		std::cout << "Yes";
	}
	else {
		std::cout << "No";
	}

	return 0;
}