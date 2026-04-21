// https://www.acmicpc.net/problem/25206

#include <iostream>
#include <string>

int main(void) {
	std::string name;
	float scale;
	std::string grade;
	float score;
	float num = 0;
	float sum = 0;

	for (int x = 0; x < 20; ++x) {
		std::cin >> name >> scale >> grade;

		if (grade == "P") {
			continue;	// 명시적으로 처리
		}

		if (grade == "A+") score = 4.5;
		else if (grade == "A0") score = 4.0;
		else if (grade == "B+") score = 3.5;
		else if (grade == "B0") score = 3.0;
		else if (grade == "C+") score = 2.5;
		else if (grade == "C0") score = 2.0;
		else if (grade == "D+") score = 1.5;
		else if (grade == "D0") score = 1.0;
		else if (grade == "F") score = 0.0;

		sum += scale * score;
		num += scale;
	}

	std::cout << sum / num;

	return 0;
}