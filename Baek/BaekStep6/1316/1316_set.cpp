// https://www.acmicpc.net/problem/1316

#include <iostream>
#include <set>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::set<char> checkListSet;

	int N;
	std::cin >> N;

	int count = 0;

	std::string input;
	for (int x = 0; x < N; ++x) {
		bool isGroup = true;
		std::cin >> input;
		for (int i = 0; i < input.length(); ++i) {
			if (checkListSet.find(input[i]) != checkListSet.end()) { // set에 원소가 있는지부터 체크
				isGroup = false;
				break;
			}

			if (checkListSet.find(input[i]) == checkListSet.end()) { // 원소가 없을때
				checkListSet.insert(input[i]);	// 해당 원소를 넣고
				for (int j = i; j < input.length(); ++j) { // 마지막 index까지 i값 변경
					if (input[j] != input[i]) {
						i = j-1;
						break;
					}
					
					if (j == input.length() - 1) {	// 하나로만 된 문자열 처리
						i = j;
						break;
					}
				}
			}
		}

		if (isGroup) {
			++count;
		}
		checkListSet.clear();	// 체크 리스트 초기화
	}
	std::cout << count;

	return 0;
}