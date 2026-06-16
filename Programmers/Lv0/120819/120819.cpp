// https://school.programmers.co.kr/learn/courses/30/lessons/120819
#include <iostream>
#include <vector>

int main(void) {
	int* answer = new int[2];
	int money;
	std::cin >> money;

	answer[0] = money / 5500;
	answer[1] = money - answer[0] * 5500;

	std::cout << answer[0] << ", " << answer[1] << '\n';

	delete[] answer;

	std::vector<int> answer_vector;
	answer_vector.push_back(money / 5500);
	answer_vector.push_back(money - answer_vector[0] * 5500);

	std::cout << answer_vector[0] << ", " << answer_vector[1] << '\n';

	return 0;
}