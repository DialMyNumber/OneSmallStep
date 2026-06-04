// https://school.programmers.co.kr/learn/courses/30/lessons/120814
#include <iostream>

int main(void) {
	int answer = 0;			// 필요한 피자의 수

	int n;
	std::cin >> n;		// 문제에서 주어질 나눠먹을 사람의 수

	int piece;

	for (answer; answer < 100; ++answer) {
		piece = answer * 7 / n;
		if (piece >= 1) {
			return answer;
		}
	}

	return 0;
}