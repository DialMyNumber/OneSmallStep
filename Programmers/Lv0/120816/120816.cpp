// https://school.programmers.co.kr/learn/courses/30/lessons/120816
#include <iostream>

int main(void) {
	int answer = 0;			// 필요한 피자의 수

	int n;
	std::cin >> n;		// 문제에서 주어질 나눠먹을 사람의 수

	int slice;
	std::cin >> slice;	// 문제에서 주어질 피자 조각 수

	int piece;

	for (answer; answer < 100; ++answer) {
		piece = answer * slice / n;
		if (piece >= 1) {
			return answer;
		}
	}

	return 0;
}