// https://www.acmicpc.net/problem/2588

#include <iostream>
#include <queue>

int main(void) {
	size_t a;
	size_t b;

	std::cin >> a;
	std::cin >> b;

	std::queue<size_t> bElement;
	int carry = 10;
	size_t tempB = b;

	while (b > carry/10) {
		bElement.push(tempB % 10); 
		tempB /= 10;
		carry *= 10;
	}

	size_t sum = 0;
	size_t sumCarry = 1;
	// 처음엔 std::vector로 구현했으나, FIFO = Queue가 더 적절해보임
	size_t size = bElement.size();
	for (int i = 0; i < size; ++i) {
		std::cout << bElement.front() * a << std::endl;
		sum += bElement.front() * a * sumCarry;
		sumCarry *= 10;
		bElement.pop();
	}
	std::cout << sum << std::endl;
}